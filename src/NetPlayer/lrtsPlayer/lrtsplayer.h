#ifndef LRTSPLAYER_H
#define LRTSPLAYER_H

#include <QtGui/QWidget>
#include "ui_lrtsplayer.h"

class lrtsPlayer : public QWidget
{
	Q_OBJECT

public:
	lrtsPlayer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~lrtsPlayer();
public slots:
	void slot_text();
private:
	void parser(std::string d);
private:
	Ui::lrtsPlayerClass ui;
};

#endif // LRTSPLAYER_H
