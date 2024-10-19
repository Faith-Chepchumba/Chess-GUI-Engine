*// textures.h*

#ifndef TEXTURES_H

#define TEXTURES_H

#include <SDL2/SDL.h>

SDL_Texture* loadTexture(const char* filePath, SDL_Renderer* renderer);

#endif

*// textures.cpp*

#include "textures.h"

#include <SDL2/SDL_image.h>

SDL_Texture* loadTexture(const char* filePath, SDL_Renderer* renderer) {

SDL_Texture* texture = IMG_LoadTexture(renderer, filePath);

if (texture == nullptr) {

printf("Failed to load texture: %s\n", SDL_GetError());

}

return texture;

}