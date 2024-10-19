*// main.cpp*

#include <SDL2/SDL.h>

#include "board.h"

#include "input_handler.h"

int main() {

*// Initialization*

SDL_Init(SDL_INIT_VIDEO);

SDL_Window* window = SDL_CreateWindow("Chess Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, SDL_WINDOW_SHOWN);

SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

*// Initialize chessboard*

Board chessBoard(renderer);

*// Main loop*

SDL_Event event;

bool running = true;

while (running) {

handleEvents(event, running, chessBoard);

chessBoard.update();

SDL_Delay(16);  *// Control frame rate*

}

*// Cleanup*

SDL_DestroyRenderer(renderer);

SDL_DestroyWindow(window);

SDL_Quit();

return 0;

}