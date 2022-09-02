#pragma once
#include "Visitor.h"
class LogVisitor :
	public Visitor
{
public:
	void log(Plane* plane) const override;
	void log(Bomb* bomb) const override;
};

