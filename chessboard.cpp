#include <SDL2/SDL.h>

#include <iostream>

const int TILE_SIZE = 100;  *// Size of each tile (in pixels)*

const int BOARD_SIZE = 8;   *// 8x8 chessboard*

void renderBoard(SDL_Renderer* renderer) {

*// Loop through rows and columns to draw the chessboard*

for (int row = 0; row < BOARD_SIZE; ++row) {

for (int col = 0; col < BOARD_SIZE; ++col) {

*// Set color for tiles*

if ((row + col) % 2 == 0) {

SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);  *// Light square (white)*

} else {

SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  *// Dark square (black)*

}

*// Calculate the position and size of the tile*

SDL_Rect tile = { col * TILE_SIZE, row * TILE_SIZE, TILE_SIZE, TILE_SIZE };

*// Draw the tile*

SDL_RenderFillRect(renderer, &tile);

}

}

}

int main(int argc, char* argv[]) {

*// Initialize SDL*

if (SDL_Init(SDL_INIT_VIDEO) < 0) {

std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;

return 1;

}

*// Create window*

SDL_Window* window = SDL_CreateWindow("Chess Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,

TILE_SIZE * BOARD_SIZE, TILE_SIZE * BOARD_SIZE, SDL_WINDOW_SHOWN);

if (window == nullptr) {

std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;

SDL_Quit();

return 1;

}

*// Create renderer*

SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

if (renderer == nullptr) {

std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;

SDL_DestroyWindow(window);

SDL_Quit();

return 1;

}

*// Main loop*

bool running = true;

SDL_Event event;

while (running) {

*// Handle events*

while (SDL_PollEvent(&event)) {

if (event.type == SDL_QUIT) {

running = false;

}

}

*// Clear the screen*

SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  *// Black background*

SDL_RenderClear(renderer);

*// Render the chessboard*

renderBoard(renderer);

*// Present the rendered frame*

SDL_RenderPresent(renderer);

}

*// Clean up*

SDL_DestroyRenderer(renderer);

SDL_DestroyWindow(window);

SDL_Quit();

return 0;

}