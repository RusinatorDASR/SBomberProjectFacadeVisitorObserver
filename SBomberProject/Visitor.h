#pragma once

#include "Plane.h"
#include "Bomb.h"
#include "FileLoggerSingleton.h"
class Bomb;
class Plane;
class Visitor
{
public:
	virtual void log(Plane* plane) const = 0;
	virtual void log(Bomb* bomb) const = 0;
};

