#pragma once
#include "parsebase.h"
class lrtsSubPagePageHtmlParse :
	public ParseBase
{
public:
	lrtsSubPagePageHtmlParse(std::string url);
	~lrtsSubPagePageHtmlParse(void);
	std::map<std::string,std::string> getSubPageItem(){return mSubPageItem;}
private:
	void pageHtml();
private:
	std::string mlrtsIndexDate;
	std::map<std::string,std::string> mSubPageItem;
};

