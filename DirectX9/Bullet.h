#pragma once

#include"Direct3D.h"
#include"DirectInput.h"
#include"Sprite.h"
#include"Texture.h"

class Bullet
{
private:
	Sprite bulletSprite;
	Texture bulletTexture;

public:
	Bullet();
	~Bullet();

	void Initialize();
	void Draw();
};