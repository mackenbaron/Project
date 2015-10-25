#ifndef LRTSPLAYER_H
#define LRTSPLAYER_H

#include <QtGui/QWidget>
#include "ui_lrtsplayer.h"

class lrtsIndexHtmpParse;
class lrtsPlayer : public QWidget
{
	Q_OBJECT

public:
	lrtsPlayer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~lrtsPlayer();
	void addTypeTOcomboBox();
public slots:
private:
	Ui::lrtsPlayerClass ui;

	lrtsIndexHtmpParse *mIndexHtml;
	std::vector<lrtsIndexDateItem> mMainType;
	std::map<std::string,std::string> msubType;
	std::map<std::string,std::string> msubpage;
};

#endif // LRTSPLAYER_H
