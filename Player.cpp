#pragma once
#include "Player.h"

Player::Player()
{}
void Player::init(int speed, int dir, int x, int y, ALLEGRO_BITMAP*image)
{
  GameObject::x = x;
	GameObject::y = y;
	Player::speed = speed;									//How fast the player moves
	Player::dir = dir;										//The direction the player is facing [0 = North, 1 = East, 2 = South, 3 = West]
	Player::health = 100;									//How much health the player has.
	Player::strength = 5;									//How strong the player is.
	Player::exp = 0;										//How much experience the player has.
	Player::level = 1;										//The player's level.

	Player::Character = image;								//The player's active image.
}
void Player::init()
{
	Player::speed = 1;										//How fast the player moves
	Player::dir = 0;										//The direction the player is facing [0 = North, 1 = East, 2 = South, 3 = West]
	Player::health = 100;									//How much health the player has.
	Player::strength = 5;									//How strong the player is.
	Player::exp = 0;										//How much experience the player has.
	Player::level = 1;										//The player's level.
	Player::Character = al_load_bitmap("playerUp.png");		//The player's active image.
}

void Player::moveUp()
{
	Player::dir = 0;
	GameObject::x -= 5;
}
void Player::moveDown()
{
	Player::dir = 2;
	GameObject::y +=5;
}
void Player::moveLeft()
{
	Player::dir = 3;
	GameObject::x -=5;
}
void Player::moveRight()
{
	Player::dir = 1;
	GameObject::x += 5;
}
void Player::Update()
{
	GameObject::Update();
	if (Player::dir = 0)
		setImage(al_load_bitmap("playerUp.png"));
	else if (Player::dir = 1)
		setImage(al_load_bitmap("playerRight.png"));
	else if (Player::dir = 2)
		setImage(al_load_bitmap("playerDown.png"));
	else if (Player::dir = 3)
		setImage(al_load_bitmap("playerLeft.png"));
	else
		setImage(al_load_bitmap("playerUp.png"));
}
void Player::Render()
{
	GameObject::Render();
	al_draw_bitmap(Player::Character, Player::x, Player::y, 0);
}
void Player::Destroy()
{
	GameObject::Destroy();
}
