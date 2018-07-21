#pragma once

#include"Header.h"

#define BULLET_SPEED 10.0f
#define BULLET_MAX 20

class Bullet
{
private:
	Sprite bulletSprite;
	Texture bulletTexture;

	//�e�̃|�W�V����
	D3DXVECTOR2 bulletPos[BULLET_MAX];

public:
	Bullet();
	~Bullet();

	void Initialize();
	void Draw();
	void Control();

	//�e�̔��ˈʒu�����߂�
	void BulletSet(D3DXVECTOR2 pos);

	//���˂��Ă��邩�̃t���O
	bool shotFlag[BULLET_MAX];
};