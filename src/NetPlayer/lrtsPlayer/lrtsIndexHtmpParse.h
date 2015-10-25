#pragma once
#include "parsebase.h"

class lrtsIndexHtmpParse :
	public ParseBase
{
public:
	lrtsIndexHtmpParse(void);
	~lrtsIndexHtmpParse(void);
	std::vector<lrtsIndexDateItem> getSubPageItem(){return mSubPageItem;}
private:
	void pageHtml();
private:
	std::string mlrtsIndexDate;
	std::vector<lrtsIndexDateItem> mSubPageItem;
};

