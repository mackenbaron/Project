#ifndef INDEXITEM_H
#define INDEXITEM_H

#include <QWidget>
#include "ParseBase.h"

class IndexItem : public QWidget,ParseBase
{
	Q_OBJECT

public:
	IndexItem(QString url,QWidget *parent);
	~IndexItem();
private:
	void pageHtml();
	void addUiItem();
private:
	QString murl;
	std::string mHtmlDate;
	std::vector<lrtsSubTypeDateItem> mHtmlTypeDate;
	std::vector<lrtsSubPage> mPagerDate;

	QVBoxLayout *mVBoxLayout;
};

#endif // INDEXITEM_H
