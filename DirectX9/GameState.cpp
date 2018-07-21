#include"GameState.h"

GameState::GameState()
{
	//コンストラクタ

	backGround = new BackGround;
	player = new Player;
	bullet = new Bullet;
}

GameState::~GameState()
{
	//デストラクタ

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

	//スペースキー押したら
	if (pDi->KeyState(DIK_SPACE) && count % 6 == 0)
	{
		//弾を発射していなければ発射
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