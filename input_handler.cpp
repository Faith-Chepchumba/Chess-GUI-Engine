*// input_handler.h*

#ifndef INPUT_HANDLER_H

#define INPUT_HANDLER_H

#include <SDL2/SDL.h>

#include "board.h"

void handleEvents(SDL_Event& event, bool& running, Board& chessBoard);

#endif

*// input_handler.cpp*

#include "input_handler.h"

void handleEvents(SDL_Event& event, bool& running, Board& chessBoard) {

while (SDL_PollEvent(&event)) {

if (event.type == SDL_QUIT) {

running = false;

}

*// Handle mouse input for piece selection and movement*

}

}