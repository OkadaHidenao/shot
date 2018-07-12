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
	//�C���X�^���X�쐬�Q
	BackGround* backGround;
	Player* player;

	//�Q�[������p
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