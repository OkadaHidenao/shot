#pragma once

#include"Header.h"

class Player
{
private:
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

	//�|�W�V����
	D3DXVECTOR2 playerPos;
};