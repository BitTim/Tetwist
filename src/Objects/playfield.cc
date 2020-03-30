#include "../lib/Objects/playfield.hh"
#include "../lib/engine.hh"

#include <SDL2/SDL.h>

void Playfield::update()
{

}

void Playfield::render()
{
  SDL_SetRenderDrawColor(Engine::renderer, 0x22, 0x28, 0x35, 0xFF);
  SDL_Rect bg = { pos.x, pos.y, (size.x * Global::TILESIZE), (size.y * Global::TILESIZE) };
  SDL_RenderFillRect(Engine::renderer, &bg);
}