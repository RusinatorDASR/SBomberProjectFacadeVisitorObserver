
#include <iostream>

#include "Bomb.h"
#include "ScreenSingleton.h"

using namespace std;

void Bomb::Draw() const
{
    ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
	ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "*";
}

void Bomb::Accept(const Visitor& v) {
	v.log(this);
}