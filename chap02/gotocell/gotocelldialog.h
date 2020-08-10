#ifndef GOTOCELL_GOTOCELLDIALOG_H_
#define GOTOCELL_GOTOCELLDIALOG_H_

#include <QDialog>

#include "ui_gotocelldialog.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
	Q_OBJECT

public:
	GoToCellDialog(QWidget *parent = 0);

private slots:
	void on_lineEdit_textChanged();


};

#endif /* GOTOCELL_GOTOCELLDIALOG_H_ */
