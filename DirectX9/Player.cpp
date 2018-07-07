#include"Player.h"

Player::Player()
{
	//�R���X�g���N�^
}
Player::~Player()
{
	//�f�X�g���N�^
}

void Player::Initialize()
{
	//�e��ݒ�
	//���C�����[�v�O�ɌĂ�

	//�|�W�V�����̐ݒ�
	playerPos.x = 320;
	playerPos.y = 450;

	//�X�s�[�h
	speed = 2.0f;
	//�����t���O
	playerAliveFlag = true;

	//�v���C���[�X�v���C�g�A�e�N�X�`���ݒ�
	playerSprite.SetAlpha(1);
	playerSprite.SetAngle(0);
	playerSprite.SetSize(playerSize, playerSize);

	playerTexture.Load(_T("test.png"));
	playerTexture.SetDivide(1, 1);
	playerTexture.SetNum(0, 0);
}

void Player::Draw()
{
	if (playerAliveFlag)
	{
		playerSprite.SetPos(playerPos.x, playerPos.y);
		playerSprite.Draw(playerTexture);
	}

	Control();
}

void Player::Control()
{
	if (pDi->KeyState(DIK_LEFTARROW))
	{
		playerPos.x -= speed;
	}
	if (pDi->KeyState(DIK_RIGHTARROW))
	{
		playerPos.x += speed;
	}
	if (pDi->KeyState(DIK_UP))
	{
		playerPos.y -= speed;
	}
	if (pDi->KeyState(DIK_DOWN))
	{
		playerPos.y += speed;
	}
}