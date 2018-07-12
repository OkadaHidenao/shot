#pragma once

#include"Direct3D.h"
#include"DirectInput.h"
#include"Sprite.h"
#include"Texture.h"

#define SCROLL 2

class BackGround
{
private:
	//背景のスプライト,テクスチャ
	Sprite backSprite[2];
	Texture backTexture[2];

	//背景をスクロールさせるためにy座標を変数化
	int y;

public:
	BackGround();
	~BackGround();

	void Initialize();
	void Draw();
};