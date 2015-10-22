#include "stdafx.h"
#include "lrtsplayer.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
	QApplication a(argc, argv);
	lrtsPlayer w;
	w.show();
	return a.exec();
}
