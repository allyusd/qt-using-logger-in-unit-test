#include "logic.h"

#include <QtCore/QDebug>

Logic::Logic()
{
}

Logic::~Logic()
{
}

QString Logic::getHelloMessage(QString name)
{
	auto helloMessage = QString("Hello ").append(name);
		 
	qDebug() << helloMessage.toStdString().data();

	return helloMessage;
}
