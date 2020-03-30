#include "lib/engine.hh"
#include <SDL2/SDL.h>

#include "lib/Objects/playfield.hh"

SDL_Event Engine::event;
SDL_Renderer* Engine::renderer = nullptr;
bool Engine::running = true;

Playfield playfield;

void Engine::init(const char* title, int x, int y, int w, int h, bool fullscreen)
{
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow(title, x, y, w, h, fullscreen ? SDL_WINDOW_FULLSCREEN : 0);
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
}

void Engine::events()
{
  SDL_PollEvent(&event);
  if(event.type == SDL_QUIT) running = false;
}

void Engine::update()
{
  
}

void Engine::render()
{
  SDL_SetRenderDrawColor(renderer, 0x3E, 0x3E, 0x3E, 0xFF);
  SDL_RenderClear(renderer);

  playfield.render();

  SDL_RenderPresent(renderer);
}

void Engine::rip()
{
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}