#pragma once

#include"Header.h"

#define BULLET_SPEED 10.0f
#define BULLET_MAX 20

class Bullet
{
private:
	Sprite bulletSprite;
	Texture bulletTexture;

	//弾のポジション
	D3DXVECTOR2 bulletPos[BULLET_MAX];

public:
	Bullet();
	~Bullet();

	void Initialize();
	void Draw();
	void Control();

	//弾の発射位置を決める
	void BulletSet(D3DXVECTOR2 pos);

	//発射しているかのフラグ
	bool shotFlag[BULLET_MAX];
};