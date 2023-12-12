#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game {
public:
	Game();
	~Game();
	void Draw();
	void HandleInput();
	void MoveBlockDown();
	bool gameOver;
	int score;
	Music music;

private:
	Block GetRandomBlock();
	Block currentBlock;
	Block nextBlock;
	std::vector<Block> blocks;
	std::vector<Block> GetAllBlocks();
	Grid grid;
	void MoveBlockLeft();
	void MoveBlockRight();
	void RotateBlock();
	void LockBlock();
	void Reset();
	void UpdateScore(int linesCleared, int moveDownPoints);
	bool IsBlockOutside();
	bool BlockFits();

};