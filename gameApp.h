#pragma once

#include "cj.h"
#include "cjUI.h"
#include "cjSFML.h"

using namespace cj;

//namespace cj {

class GameApp : public Application {
	RenderWindow *window;
public:
	GameApp();
	~GameApp();
	virtual void run();
};

//}
