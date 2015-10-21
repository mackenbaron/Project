#include "stdafx.h"
#include "lrtsplayer.h"

lrtsPlayer::lrtsPlayer(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(slot_text()));
}

lrtsPlayer::~lrtsPlayer()
{

}

void lrtsPlayer::slot_text()
{

}
