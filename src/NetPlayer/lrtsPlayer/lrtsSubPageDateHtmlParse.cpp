#include "StdAfx.h"
#include "lrtsSubPageDateHtmlParse.h"


lrtsSubPageDateHtmlParse::lrtsSubPageDateHtmlParse(std::string url)
	:ParseBase()
{
	if(url == "")
		return ;
	mlrtsIndexDate = GetUrlHtml(url);
	pageHtml();
}


lrtsSubPageDateHtmlParse::~lrtsSubPageDateHtmlParse(void)
{
}

void lrtsSubPageDateHtmlParse::pageHtml()
{

}
