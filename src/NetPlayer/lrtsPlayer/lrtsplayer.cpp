#include "stdafx.h"
#include "lrtsplayer.h"
#include "lrtsIndexHtmpParse.h"
#include "lrtsSubPageTypeHtmlParse.h"
#include "lrtsSubPageDateHtmlParse.h"
#include "lrtsSubPagePageHtmlParse.h"

lrtsPlayer::lrtsPlayer(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	mMainType.clear();
	msubType.clear();
	ui.setupUi(this);
	mIndexHtml = new lrtsIndexHtmpParse();
	addTypeTOcomboBox();
	connect(ui.comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(slot_selctType(QString)));
	connect(ui.comboBox_2, SIGNAL(currentIndexChanged(QString)), this, SLOT(slot_subselctType(QString)));
}

lrtsPlayer::~lrtsPlayer()
{

}

void lrtsPlayer::addTypeTOcomboBox()
{
	mMainType = mIndexHtml->getSubPageItem();
	std::map<std::string,std::string>::iterator it = mMainType.begin();
	for(;it != mMainType.end();it++)
	{
		ui.comboBox->addItem(QString(it->first.c_str()));
	}
}

void lrtsPlayer::slot_selctType(QString i)
{
	std::string _temp = i.toStdString();
 	std::map<std::string,std::string>::iterator id  = mMainType.find(_temp);
	if(id->first != ""&& id->second !="")
	{
		std::string url = "http://www.lrts.me"+id->second;

		int c = ui.comboBox_2->count();
		if(c > 1)
		{
			for(int i = 1;i<c;i++)
				ui.comboBox_2->removeItem(i);
		}		

		lrtsSubPageTypeHtmlParse subpage(url);
		msubType = subpage.getSubPageItem();
		std::map<std::string,std::string>::iterator it1 = msubType.begin();

		for(;it1 != msubType.end();it1++)
		{
			ui.comboBox_2->addItem(QString(it1->first.c_str()));
		}
	}
 	
}

void lrtsPlayer::slot_subselctType(QString i)
{
	std::string _temp = i.toStdString();
	std::map<std::string,std::string>::iterator id  = msubType.find(_temp);
	if(id->first != ""&& id->second !="")
	{
 		std::string url = "http://www.lrts.me/"+id->second;
// 		lrtsSubPageDateHtmlParse datepage(url);

		int d = ui.comboBox_3->count();
		if(d >1)
		{
			for(int i = 1;i<d;i++)
				ui.comboBox_2->removeItem(i);
		}

		lrtsSubPagePageHtmlParse subpagepage(url);
		msubpage = subpagepage.getSubPageItem();
		std::map<std::string,std::string>::iterator it = msubpage.begin();
		for(;it != msubpage.end();it++)
		{
			ui.comboBox_3->addItem(QString(it->first.c_str()));
		}

	}

}
