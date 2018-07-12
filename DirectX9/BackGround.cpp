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
		backSprite[i].SetSize(640, 480);
		
		backTexture[i].Load(_T("Graphic/texture.png"));
		backTexture[i].SetDivide(1, 1);
		backTexture[i].SetNum(0, 0);
	}

	backSprite[0].SetPos(640 / 2, y);
	backSprite[1].SetPos(640 / 2, y - 480);
}

void BackGround::Draw()
{
	backSprite[0].SetPos(640 / 2, y);
	backSprite[1].SetPos(640 / 2, y - 480);

	for (int i = 0; i < 2; i++)
	{
		backSprite[i].Draw(backTexture[i]);
	}

	//背景スクロール========
	y += SCROLL;
	if (y == 240+480)
	{
		y = 240;
	}
	//======================
}