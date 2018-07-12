#pragma once

#include"Direct3D.h"
#include"DirectInput.h"
#include"Sprite.h"
#include"Texture.h"

#define SCROLL 2

class BackGround
{
private:
	//�w�i�̃X�v���C�g,�e�N�X�`��
	Sprite backSprite[2];
	Texture backTexture[2];

	//�w�i���X�N���[�������邽�߂�y���W��ϐ���
	int y;

public:
	BackGround();
	~BackGround();

	void Initialize();
	void Draw();
};