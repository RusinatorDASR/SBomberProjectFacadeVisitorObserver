#pragma once
#include "Visitor.h"
class LogVisitor :
	public Visitor
{
public:
	void log(Plane* plane) override;
	void log(Bomb* bomb) override;
};

