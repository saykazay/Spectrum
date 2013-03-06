#pragma once
#include "GameObject.cpp"

class Player : public GameObject
{
protected:
  int speed;
	int dir;
	int health;
	int strength;
	int exp;
	int level;

	ALLEGRO_BITMAP*Character;


public:
	Player();
	void init(int speed, int dir, int x, int y, ALLEGRO_BITMAP *image);
	void init();

	int getSpeed(){return Player::speed;}
	int getDir(){return Player::dir;}
	int getExp(){return Player::exp;};
	int getHealth(){return Player::strength;}
	int getLevel(){return Player::level;}

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	int setLocation(int x, int y);

	void levelUp();
	void addExp(int xp){Player::exp += xp;}
	void addStr(int st){Player::strength += st;}
	void addHealth(int hp){Player:health +=hp;}
	void setDir(int dir){Player::dir = dir;}
	
	void setImage(ALLEGRO_BITMAP *image);
	void Render();
	void Update();
	void Destroy();

};
