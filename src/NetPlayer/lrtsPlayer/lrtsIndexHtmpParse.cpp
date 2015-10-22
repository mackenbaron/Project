#include "StdAfx.h"
#include "lrtsIndexHtmpParse.h"


lrtsIndexHtmpParse::lrtsIndexHtmpParse(void)
	:ParseBase()
	,mlrtsIndexDate("")
{
	mlrtsIndexDate = GetUrlHtml(LRTSINDEX);
	mSubPageItem.clear();
	pageHtml();
}


lrtsIndexHtmpParse::~lrtsIndexHtmpParse(void)
{
}

void lrtsIndexHtmpParse::pageHtml()
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
		std::string a = it->tagName();
		if(_stricmp(it->tagName().c_str(), "li") == 0) 
		{
			it->parseAttributes();
			std::string _tempclass = it->attribute("class").second;
			if(_tempclass == "h-category-item")
			{
				++it;
				if(_stricmp(it->tagName().c_str(), "a") == 0)
				{
					it->parseAttributes();
					itemurl = it->attribute("href").second;
				}
				++it;++it;
				if(_stricmp(it->tagName().c_str(), "span") == 0)
				{
					++it;
					itemname = it->text();
				}
				mSubPageItem.insert(std::make_pair(itemname,itemurl));
			}
		}
	}
}
