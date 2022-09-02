#pragma once


#include "DynamicObject.h"
#include "DestroyableGroundObject.h"
using namespace std;

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;

	void AddObserver(const vector<DestroyableGroundObject*>& findDestroyableObj);

	DestroyableGroundObject* CheckDestroyableObjects();

private:

	vector<DestroyableGroundObject*> observers;
};

