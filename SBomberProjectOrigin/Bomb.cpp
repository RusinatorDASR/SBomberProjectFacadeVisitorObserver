
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

void Bomb::AddObserver(const vector<DestroyableGroundObject*>& findDestroyableObj) {
	observers = findDestroyableObj;
}

DestroyableGroundObject* Bomb::CheckDestroyableObjects() {
	const double size = GetWidth();
	const double size_2 = size / 2;
	for (size_t i = 0; i < observers.size(); i++)
	{
		const double x1 = GetX() - size_2;
		const double x2 = x1 + size;
		if (observers[i]->isInside(x1, x2))
		{
			return observers[i];
		}
		else {
			return nullptr;
		}
	}
}