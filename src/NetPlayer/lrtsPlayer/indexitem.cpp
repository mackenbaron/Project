#include "StdAfx.h"
#include "lrtsIndexHtmpParse.h"
#include "indexitem.h"

IndexItem::IndexItem(QString url,QWidget *parent)
	: QWidget(parent)
	, ParseBase()
	, murl(QString(LRTS)+url)
	,mHtmlDate("")
{
	mHtmlDate = GetUrlHtml(murl.toStdString());

	mHtmlTypeDate.clear();
	mPagerDate.clear();
	if(mHtmlDate !="")
		pageHtml();
	else
		return ;
	addUiItem();
}

IndexItem::~IndexItem()
{

}

void IndexItem::pageHtml()
{
	util u;
	int contpage=0;
	HTML::ParserDom parser;
	tree<HTML::Node> dom = parser.parseTree(mHtmlDate); 
	tree<HTML::Node>::iterator it = dom.begin();
	for(;it != dom.end();++it)
	{
		//解析子页类型
		if(_stricmp(it->tagName().c_str(), "section") == 0)
		{
			it->parseAttributes();
			std::string _tempcalss = it->attribute("class").second;
			if(_tempcalss =="category-filter")
			{
				tree<HTML::Node>::iterator filter = dom.begin(it);
				for(;filter!=dom.end();++filter)
				{
					lrtsSubTypeDateItem _temp;
					filter->parseAttributes();
					if (filter->isTag() && (_stricmp(filter->tagName().c_str(), "a")== 0))
					{
						_temp.url =std::string(LRTS)+filter->attribute("href").second;
						tree<HTML::Node>::iterator _tempname = dom.begin(filter);
						_tempname->parseAttributes();
						_temp.name= _tempname->text();
						mHtmlTypeDate.push_back(_temp);
					}
					if (filter->isTag() && (_stricmp(filter->tagName().c_str(), "section")== 0))
						break;
				}
			}
		}
		
		//解析页数
		if(it->tagName() == "div")
		{
			it->parseAttributes();
			std::string _tempcalss = it->attribute("class").second;
			if(_tempcalss =="pagination")
			{
				tree<HTML::Node>::iterator page = dom.begin(it);
				for(;page!=dom.end();++page)
				{
					page->parseAttributes();
					std::string a= page->tagName();
					if (page->isTag() && (_stricmp(page->tagName().c_str(), "a")== 0))
					{
						//总页数少于10的时候不准确，需要修改
						contpage++;
						std::string _temppage = page->attribute("class").second;
						if(_temppage == "ep")
						{
							tree<HTML::Node>::iterator _tempZpage = dom.begin(page);
							_tempZpage->parseAttributes();
							contpage = u.StringToInt(_tempZpage->text().c_str());
							break;
						}
					}
				}
			}
		}
	}
	for(int i = 1; i< contpage;i++)
	{
		lrtsSubPage _temppage;
		_temppage.name= QString::number(i).toStdString();
		_temppage.url = murl.toStdString()+"/recommend/"+_temppage.name+"/20";
		mPagerDate.push_back(_temppage);
	}

}

void IndexItem::addUiItem()
{
	mVBoxLayout = new QVBoxLayout();
	for(int i = 0; i <mHtmlTypeDate.size();i++)
	{
		QString _name = QString::fromLocal8Bit(mHtmlTypeDate[i].name.c_str());
		QLabel *_temp = new QLabel(_name,this);
		mVBoxLayout->addWidget(_temp);
	}
	this->setLayout(mVBoxLayout);
}
