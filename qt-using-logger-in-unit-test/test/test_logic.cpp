#include "logic.h"

#include <QtCore/QVector>
#include <QtCore/QDebug>

#include "gtest/gtest.h"

static QVector<std::string> g_loggerMessages;

void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	g_loggerMessages.append(msg.toStdString());
}

TEST(TestLogic, HelloMessage)
{
	qInstallMessageHandler(myMessageOutput);

	Logic logic;

	std::string name = logic.getHelloMessage("Jian-Ching").toStdString();
	EXPECT_EQ(true, g_loggerMessages.contains("Hello Jian-Ching"));
}
