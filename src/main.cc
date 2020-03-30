#include <iostream>
#include "lib/engine.hh"

Engine* engine = nullptr;

int main()
{
  engine = new Engine;
  engine->init("Tetwist", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 320, false);

  while(engine->running)
  {
    engine->events();
    engine->update();
    engine->render();
  }

  engine->rip();
  return 0;
}

// Easter Egg: "Guys, Let's go, all of you. We can get' em", DarkLight 2020