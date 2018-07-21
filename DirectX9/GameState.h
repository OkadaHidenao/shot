#pragma once

#include"BackGround.h"
#include"Player.h"
#include"Bullet.h"

enum Sequence
{
	GAME_TITLE,
	GAME_MAIN,
	GAME_CLEAR,
	GAME_OVER
};

class GameState
{
private:
	//�C���X�^���X�쐬�Q
	BackGround* backGround;
	Player* player;
	Bullet* bullet;

	//�Q�[������p
	Sequence gameSeq;

	//�L�[����p
	DirectInput*pDi = DirectInput::GetInstansce();

	//�e�̐�
	int BulletNum;

	//�J�E���g�ϐ�
	int count;

public:
	GameState();
	~GameState();

	void Initialize();
	void Update();
	void Draw();

	void GameTitle();
	void GameMain();
	void GameClear();
	void GameOver();
};