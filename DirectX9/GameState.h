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
	//インスタンス作成群
	BackGround* backGround;
	Player* player;
	Bullet* bullet;

	//ゲーム分岐用
	Sequence gameSeq;

	//キー操作用
	DirectInput*pDi = DirectInput::GetInstansce();

	//弾の数
	int BulletNum;

	//カウント変数
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