#include"Bullet.h"

Bullet::Bullet()
{
	//コンストラクタ
}
Bullet::~Bullet()
{
	//デストラクタ
}

void Bullet::Initialize()
{
	bulletSprite.SetAlpha(1);
	bulletSprite.SetAngle(0);
	bulletSprite.SetSize(32, 32);
	
	bulletTexture.Load(_T("Graphic/shot.png"));
	bulletTexture.SetDivide(1, 1);
	bulletTexture.SetNum(0, 0);
}

void Bullet::Draw()
{
	for (int i = 0; i < BULLET_MAX; i++)
	{
		if (shotFlag[i])
		{
			bulletSprite.Draw(bulletTexture);
			bulletSprite.SetPos(bulletPos[i].x, bulletPos[i].y);
		}
	}
}

void Bullet::Control()
{
	
}

void Bullet::BulletSet(D3DXVECTOR2 pos)
{
	for (int i = 0; i < BULLET_MAX; i++)
	{
		if (shotFlag[i])
		{
			bulletPos[i].y -= BULLET_SPEED;
			if (bulletPos[i].y < -16)
			{
				shotFlag[i] = false;
			}
		}
		else
		{
			bulletPos[i] = pos;
		}
	}
}

