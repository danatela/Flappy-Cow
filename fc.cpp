#include "stdafx.h"

#include "cj.h"
#include "cjUI.h"
#include "cjSFML.h"
#include "gameApp.h"

using namespace cj;

#pragma comment(lib, "cjCore.lib")
#pragma comment(lib, "cjUI.lib")
#pragma comment(lib, "cjSFML.lib")

int main()
{
	application = new GameApp();
	application->run();

	getchar();

	return 0;
}

