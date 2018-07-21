#include"BackGround.h"

BackGround::BackGround()
{
	//コンストラクタ

	y = 240;
}
BackGround::~BackGround()
{
	//デストラクタ
}

void BackGround::Initialize()
{
	for (int i = 0; i < 2; i++)
	{
		backSprite[i].SetAlpha(1);
		backSprite[i].SetAngle(0);
		backSprite[i].SetSize(WINDOW_WIDTH, WINDOW_HEIGHT);
		
		backTexture[i].Load(_T("Graphic/back.png"));
		backTexture[i].SetDivide(1, 1);
		backTexture[i].SetNum(0, 0);
	}

	backSprite[0].SetPos(WINDOW_WIDTH / 2, y);
	backSprite[1].SetPos(WINDOW_WIDTH / 2, y - WINDOW_HEIGHT);
}

void BackGround::Draw()
{
	backSprite[0].SetPos(WINDOW_WIDTH / 2, y);
	backSprite[1].SetPos(WINDOW_WIDTH / 2, y - WINDOW_HEIGHT);

	for (int i = 0; i < 2; i++)
	{
		backSprite[i].Draw(backTexture[i]);
	}

	//背景スクロール========
	y += SCROLL;
	if (y == 240 + WINDOW_HEIGHT)
	{
		y = 240;
	}
	//======================
}