#pragma once
#include "GameObject.h"

GameObject::GameObject()
{
  x = 0;
	y = 0;

	image = NULL;
}
void GameObject::Destroy()
{
	if (image !=NULL)
		al_destroy_bitmap(image);
}
void GameObject::Init(float x, float y)
{
	GameObject::x = x;
	GameObject::y = y;
}
void GameObject::Update()
{}
void GameObject::Render()
{}
