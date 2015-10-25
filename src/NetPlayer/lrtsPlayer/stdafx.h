#pragma once

#define LRTS "http://www.lrts.me"
#define LRTSINDEX "http://www.lrts.me/index"
//系统头文件
#include <QtGui>
#include <QtGui/QtGui>
#include <QtCore/QtCore>

#if defined WIN32 || defined _WIN32
#include <iostream>
#include <io.h>
#include <winsock2.h>
#include <Windows.h>
#include <shellapi.h>
#include <Shlwapi.h>
#include <conio.h>        // For _kbhit() on Windows
#include <direct.h>        // For mkdir(path) on Windows
#include "time.h"
#include <stdio.h>
#include <stdlib.h> 
#include <queue>
#include <MMSystem.h>
#include <map>
#define snprintf sprintf_s    // Visual Studio on Windows comes with sprintf_s() instead of snprintf()
#pragma comment(lib,"Shlwapi.lib")
#pragma comment(lib, "DbgHelp.lib")
#else
#include <stdio.h>        // For getchar() on Linux
#include <termios.h>    // For kbhit() on Linux
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>    // For mkdir(path, options) on Linux
#endif 
#include <string>

//自己头文件
#include <htmlcxx/html/ParserDom.h>
#include <curl/curl.h>
#include <curl/easy.h>
#include "mylib/curlHttpRequestBase.h"
#include "mylib/curlHttpRequest.h"
#include "mylib/util.h"

using namespace std;
using namespace htmlcxx;

typedef struct _a
{
	std::string name;
	std::string url;
	std::string pic;
}lrtsIndexDateItem;
typedef struct _b
{
	std::string name;
	std::string url;
}lrtsSubTypeDateItem;

typedef struct _c
{
	std::string name;
	std::string url;
}lrtsSubPage;