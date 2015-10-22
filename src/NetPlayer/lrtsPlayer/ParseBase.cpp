#include "StdAfx.h"
#include "ParseBase.h"


ParseBase::ParseBase(void)
{
}


ParseBase::~ParseBase(void)
{
}

std::string ParseBase::GetUrlHtml(std::string url)
{
	util u;
	u.ReplaceSrc(url," ","%20");
	if(url == "")
		return "";
	curlHttpRequest c;
	std::string _tempreturn="";
	c.Get(url,_tempreturn,10);
	return u.UTF8ToGBK(_tempreturn);	
}
