#pragma once
#include "../vec2.hh"
#include "../globals.hh"

class Playfield
{
public:
  Playfield() { }

  void update();
  void render();

private:
  Vec2 size = Vec2(44, 10);
  Vec2 pos = Vec2(Global::SCREENWIDTH / 2 - (size.x * Global::TILESIZE) / 2, Global::SCREENHEIGHT / 2 - (size.y * Global::TILESIZE) / 2);
  float gravity = 9.81f;
};