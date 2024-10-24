#pragma once

#include <Windows.h>
#include <vector>
#include "AnimationFrame.h"

using namespace std;

class CAnimation
{
	ULONGLONG lastFrameTime;
	int defaultTime;
	int currentFrame;
	pmr::vector<LPANIMATION_FRAME> frames;

public:
	CAnimation(int defaultTime = 100) { this->defaultTime = defaultTime; lastFrameTime = -1; currentFrame = -1; }
	void Add(int spriteId, DWORD time = 0);
	void Render(float x, float y);
};

typedef CAnimation* LPANIMATION;