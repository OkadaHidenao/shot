#include"GameState.h"

GameState::GameState()
{
	//�R���X�g���N�^

	backGround = new BackGround;
	player = new Player;
	bullet = new Bullet;
}

GameState::~GameState()
{
	//�f�X�g���N�^

	delete backGround;
	delete player;
	delete bullet;
}

void GameState::Initialize()
{
	backGround->Initialize();
	player->Initialize();
	bullet->Initialize();

	gameSeq = GAME_MAIN;

	BulletNum = 0;
	count = 0;
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
	bullet->Draw();
	player->Draw();

	bullet->BulletSet(player->playerPos);

	//�X�y�[�X�L�[��������
	if (pDi->KeyState(DIK_SPACE) && count % 6 == 0)
	{
		//�e�𔭎˂��Ă��Ȃ���Δ���
		if (!bullet->shotFlag[BulletNum])
		{
			bullet->shotFlag[BulletNum] = true;
			BulletNum++;
		}
	}

	if (BulletNum >= BULLET_MAX)
	{
		BulletNum = 0;
	}

	count++;
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