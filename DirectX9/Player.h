#pragma once

#include"Direct3D.h"
#include"DirectInput.h"
#include"Sprite.h"
#include"Texture.h"

class Player
{
private:
	//�|�W�V����
	D3DXVECTOR2 playerPos;
	//�X�s�[�h
	float speed;
	//�X�v���C�g,�e�N�X�`��
	Sprite playerSprite;
	Texture playerTexture;
	//�����t���O
	bool playerAliveFlag;
	//���L�����T�C�Y
	const int playerSize = 32;

	//�L�[����p
	DirectInput*pDi = DirectInput::GetInstansce();

public:
	Player();
	~Player();

	void Initialize();
	void Draw();
	void Control();

};