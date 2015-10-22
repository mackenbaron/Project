#pragma once
#include "parsebase.h"
class lrtsSubPageDateHtmlParse :
	public ParseBase
{
public:
	lrtsSubPageDateHtmlParse(std::string url);
	~lrtsSubPageDateHtmlParse(void);
private:
	void pageHtml();
private:
	std::string mlrtsIndexDate;
};

