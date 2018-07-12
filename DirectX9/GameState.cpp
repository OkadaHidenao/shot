#include"GameState.h"

GameState::GameState()
{
	//コンストラクタ

	backGround = new BackGround;
	player = new Player;
}

GameState::~GameState()
{
	//デストラクタ

	delete backGround;
	delete player;
}

void GameState::Initialize()
{
	backGround->Initialize();
	player->Initialize();

	gameSeq = GAME_MAIN;
}

void GameState::Update()
{
	switch (gameSeq)
	{
	case GAME_TITLE:
		GameTitle();
		break;

	case GAME_MAIN:
		GameMain();
		break;

	case GAME_CLEAR:
		GameClear();
		break;

	case GAME_OVER:
		GameOver();
		break;

	default:
		break;
	}
}

void GameState::Draw()
{
	backGround->Draw();
	player->Draw();
}

void GameState::GameTitle()
{
	//タイトル
}

void GameState::GameMain()
{
	//メイン

	Draw();
}

void GameState::GameClear()
{
	//ゲームクリア
}

void GameState::GameOver()
{
	//ゲームオーバー
}