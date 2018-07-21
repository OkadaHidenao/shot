#pragma once

#include"Header.h"

class Player
{
private:
	//スピード
	float speed;
	//スプライト,テクスチャ
	Sprite playerSprite;
	Texture playerTexture;
	//生存フラグ
	bool playerAliveFlag;
	//自キャラサイズ
	const int playerSize = 32;

	//キー操作用
	DirectInput*pDi = DirectInput::GetInstansce();

public:
	Player();
	~Player();

	void Initialize();
	void Draw();
	void Control();

	//ポジション
	D3DXVECTOR2 playerPos;
};