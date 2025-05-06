#ifndef SDL_IMAGE_FUNCTIONS_H
#define SDL_IMAGE_FUNCTIONS_H
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

using namespace std;

extern SDL_Surface* image;
extern SDL_Texture* texture;

void CreateImg(SDL_Renderer* renderer, const char* str_image, SDL_Rect rect);
void Show_image(SDL_Renderer* renderer, const char* str_image, SDL_Rect rect);

#endif // !SDL_IMAGE_FUNCTIONS_H
