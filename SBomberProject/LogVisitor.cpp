#include "LogVisitor.h"

using namespace std;

void LogVisitor::log(Plane* plane) const {
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Plane coordinate X =  ", plane->GetX());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Plane coordinate Y =  ", plane->GetY());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Plane direction X =  ", plane->GetDirectionX());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Plane direction Y =  ", plane->GetDirectionY());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Plane speed X =  ", plane->GetSpeed());
}

void LogVisitor::log(Bomb* bomb) const {
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Bomb coordinate X =  ", bomb->GetX());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Bomb coordinate Y =  ", bomb->GetY());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Bomb direction X =  ", bomb->GetDirectionX());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Bomb direction Y =  ", bomb->GetDirectionY());
	FileLoggerSingleton::getInstance().WriteToLog(string(__FUNCTION__) + " was invoked. Bomb speed X =  ", bomb->GetSpeed());
}
