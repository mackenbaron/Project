#pragma once
#include "parsebase.h"

class lrtsIndexHtmpParse :
	public ParseBase
{
public:
	lrtsIndexHtmpParse(void);
	~lrtsIndexHtmpParse(void);
	std::map<std::string,std::string> getSubPageItem(){return mSubPageItem;}
private:
	void pageHtml();
private:
	std::string mlrtsIndexDate;
	std::map<std::string,std::string> mSubPageItem;
};

