#pragma once
#include <SDL2/SDL.h>

class Engine
{
public:
  Engine() { };

  void init(const char* title, int x, int y, int w, int h, bool fullscreen);
  void events();
  void update();
  void render();
  void rip();

  ~Engine() { };

  static SDL_Event event;
  static SDL_Renderer* renderer;
  static bool running;

private:
  SDL_Window* window;
};