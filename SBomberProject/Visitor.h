#pragma once

#include "Plane.h"
#include "Bomb.h"
#include "FileLoggerSingleton.h"
class Bomb;
class Plane;
class Visitor
{
public:
	virtual void log(Plane* plane) = 0;
	virtual void log(Bomb* bomb) = 0;
};

