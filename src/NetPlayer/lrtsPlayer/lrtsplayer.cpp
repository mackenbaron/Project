#include "stdafx.h"
#include "lrtsplayer.h"
#include "lrtsIndexHtmpParse.h"
#include "indexitem.h"

lrtsPlayer::lrtsPlayer(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	mMainType.clear();
	msubType.clear();
	ui.setupUi(this);
	mIndexHtml = new lrtsIndexHtmpParse();
	addTypeTOcomboBox();

}

lrtsPlayer::~lrtsPlayer()
{

}

void lrtsPlayer::addTypeTOcomboBox()
{
 	mMainType = mIndexHtml->getSubPageItem();
	if(mMainType.size()<=0)
	{
		int ret = QMessageBox::warning(this, tr("My Application"),
			tr("NULL"),
			QMessageBox::Ok ,
			QMessageBox::Ok);
	}
	ui.toolBox->removeItem(0);
	for(int i=0;i<mMainType.size();i++)
	{
		lrtsIndexDateItem _tempitem = mMainType[i];
		IndexItem *_temp = new IndexItem(QString::fromLocal8Bit(_tempitem.url.c_str()),this);
		ui.toolBox->addItem(_temp, QString::fromLocal8Bit(_tempitem.name.c_str()));
	}
}
