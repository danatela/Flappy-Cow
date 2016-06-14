#include "cj.h"
#include "cjUI.h"
#include "cjSFML.h"
#include "gameApp.h"

using namespace cj;

//namespace cj {

GameApp::GameApp() {
	window = new RenderWindow(nullptr, 300, 300, "Flappy Cow");
}

GameApp::~GameApp() {
}

void GameApp::run() {
	Texture *txCar = new SfmlTexture();
	if (!txCar->loadFromFile("images/cow.png")) {
		exit(1);
	}

	Sprite *sprite = new SfmlSprite(window);
	sprite->setTexture(*txCar);

	while (window->isOpen())
	{
		window->eventHandler();
		window->clear();

		Rect rect(0, 0, 256, 256, true);
		sprite->setTextureRect(rect);

		sprite->setPosition(0, 0);// rand() % 100, rand() % 100);

		Rect r;
		window->sprite(r, *sprite);

		window->display();
	}
}

//}
