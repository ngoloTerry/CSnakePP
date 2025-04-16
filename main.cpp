#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <SDL2/SDL.h>


int main() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    std::cout << "SDL2 is working!" << std::endl;
    SDL_Quit();
    std::cout << "hello" << std::endl;
    return 0;
}
