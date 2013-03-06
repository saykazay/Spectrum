#pragma once
#include <iostream>
#include <allegro5\allegro5.h>
#include <allegro5\allegro_primitives.h>
#include "globals.h"

class GameObject
{
private:

protected:
  float x;
	float y;
	ALLEGRO_BITMAP *image;

public:
	GameObject();
	void virtual Destroy();

	float getX() {return x;}
	float getY() {return y;}

	void Init(float x, float y);
	void virtual Update();
	void virtual Render();
};
