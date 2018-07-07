#include"Player.h"

Player::Player()
{
	//コンストラクタ
}
Player::~Player()
{
	//デストラクタ
}

void Player::Initialize()
{
	//各種設定
	//メインループ前に呼ぶ

	//ポジションの設定
	playerPos.x = 320;
	playerPos.y = 450;

	//スピード
	speed = 2.0f;
	//生存フラグ
	playerAliveFlag = true;

	//プレイヤースプライト、テクスチャ設定
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