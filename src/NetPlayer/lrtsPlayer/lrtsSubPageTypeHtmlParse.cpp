#include "StdAfx.h"
#include "lrtsSubPageTypeHtmlParse.h"


lrtsSubPageTypeHtmlParse::lrtsSubPageTypeHtmlParse(std::string url)
	:ParseBase()
{
	if(url == "")
		return ;
	mlrtsIndexDate = GetUrlHtml(url);
	mSubPageItem.clear();
	pageHtml();
}


lrtsSubPageTypeHtmlParse::~lrtsSubPageTypeHtmlParse(void)
{
}

void lrtsSubPageTypeHtmlParse::pageHtml()
{
	if(mlrtsIndexDate =="")
	{
		mSubPageItem.insert(std::make_pair("Error","Get Html Error"));
		return ;
	}
	HTML::ParserDom parser;
	tree<HTML::Node> dom = parser.parseTree(mlrtsIndexDate); 
	tree<HTML::Node>::iterator it = dom.begin();
	for(;it != dom.end();++it)
	{
		std::string itemurl="",itemname="";
	
		if(_stricmp(it->tagName().c_str(), "section") == 0) 
		{
			it->parseAttributes();
			std::string _tempclass = it->attribute("class").second;
			if(_tempclass == "category-filter")
			{
				while(1)
				{
					std::string a = it->tagName();
					if(_stricmp(it->tagName().c_str(), "a")==0)
					{
						it->parseAttributes();
						std::string itemurl = it->attribute("href").second;
						++it;
						std::string itemname = it->text();
						mSubPageItem.insert(std::make_pair(itemname,itemurl));
					}
					++it;
					if(_stricmp(it->tagName().c_str(), "section") == 0)
					{
						++it;
						break;
					}
				}
			}
		}
	}
}
