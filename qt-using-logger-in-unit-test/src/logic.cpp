#include "logic.h"

Logic::Logic()
{
}

Logic::~Logic()
{
}

QString Logic::getHelloMessage(QString name)
{
	return QString("Hello ").append(name);
}
