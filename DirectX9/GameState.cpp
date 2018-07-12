#include"GameState.h"

GameState::GameState()
{
	//�R���X�g���N�^

	backGround = new BackGround;
	player = new Player;
}

GameState::~GameState()
{
	//�f�X�g���N�^

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
	//�^�C�g��
}

void GameState::GameMain()
{
	//���C��

	Draw();
}

void GameState::GameClear()
{
	//�Q�[���N���A
}

void GameState::GameOver()
{
	//�Q�[���I�[�o�[
}