#pragma once
#include "parsebase.h"
class lrtsSubPageTypeHtmlParse :
	public ParseBase
{
public:
	lrtsSubPageTypeHtmlParse(std::string url);
	~lrtsSubPageTypeHtmlParse(void);
	std::map<std::string,std::string> getSubPageItem(){return mSubPageItem;}
private:
	void pageHtml();
private:
	std::string mlrtsIndexDate;
	std::map<std::string,std::string> mSubPageItem;
};

