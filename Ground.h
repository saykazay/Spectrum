#pragma once
#include "GameObject.h"

class Ground : public GameObject
{
protected:
  int type;
public:
	void init(int type);
}
