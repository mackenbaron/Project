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
		return ;
	}
	HTML::ParserDom parser;
	tree<HTML::Node> dom = parser.parseTree(mlrtsIndexDate); 
	tree<HTML::Node>::iterator it = dom.begin();
	for(;it != dom.end();++it)
	{
		if(_stricmp(it->tagName().c_str(), "li") == 0)
		{
			it->parseAttributes();
			std::string _tempcalss = it->attribute("class").second;
			if(_tempcalss == "h-category-item")
			{
				lrtsIndexDateItem _item;
				tree<HTML::Node>::iterator categoryItem = dom.begin(it);
				for(;categoryItem!=dom.end();++categoryItem)
				{
					categoryItem->parseAttributes();
					if (categoryItem->isTag() && (_stricmp(categoryItem->tagName().c_str(), "a")== 0))
					{
						_item.url = categoryItem->attribute("href").second;
					}
					if (categoryItem->isTag() && (_stricmp(categoryItem->tagName().c_str(), "img")== 0))
					{
						_item.pic = categoryItem->attribute("src").second;
					}
					if (categoryItem->isTag() && (_stricmp(categoryItem->tagName().c_str(), "span")== 0))
					{
						tree<HTML::Node>::iterator spanname = dom.begin(categoryItem);
						spanname->parseAttributes();
						_item.name= spanname->text();
						break;
					}					
				}
				mSubPageItem.push_back(_item);
			}
		}
	}
}
