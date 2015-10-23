#include "StdAfx.h"
#include "lrtsSubPagePageHtmlParse.h"


lrtsSubPagePageHtmlParse::lrtsSubPagePageHtmlParse(std::string url)
	:ParseBase()
	,mlrtsIndexDate("")
{
	if(url == "")
		return;
	mlrtsIndexDate = GetUrlHtml(url);
	mSubPageItem.clear();
	pageHtml();
}


lrtsSubPagePageHtmlParse::~lrtsSubPagePageHtmlParse(void)
{
}

void lrtsSubPagePageHtmlParse::pageHtml()
{
	if(mlrtsIndexDate =="")
	{
		mSubPageItem.insert(std::make_pair("Error","Get Html Error"));
		return ;
	}
	HTML::ParserDom parser;
	tree<HTML::Node> dom = parser.parseTree(mlrtsIndexDate); 
	tree<HTML::Node>::iterator it = dom.begin();
	std::string itemurl="",itemname="";
	for(;it != dom.end();++it)
	{	
		std::string a = it->tagName();
		if(_stricmp(it->tagName().c_str(), "a") == 0) 
		{

			it->parseAttributes();
			if(_stricmp(it->attribute("class").second.c_str(), "ep") == 0)
			{
				it->parseAttributes();
				itemurl = it->attribute("href").second;
				++it;
				itemname = it->text();	
				break;
			}


		}
	}
	util u;
	int pagecong = u.StringToInt(itemname.c_str());
	for(int i = 1;i < pagecong;i++)
	{
		std::string a=itemurl.substr(0,itemurl.find("recommend")+10),b="";
		a.append(u.intTOStirng(i));
		a.append("/20");
		b = u.intTOStirng(i);
		mSubPageItem.insert(std::make_pair(b,a));
	}
}
