#pragma once

#include"BackGround.h"
#include"Player.h"

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

	//ゲーム分岐用
	Sequence gameSeq;

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