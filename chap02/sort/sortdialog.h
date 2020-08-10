#ifndef SORT_SORTDIALOG_H_
#define SORT_SORTDIALOG_H_

#include <QDialog>

#include "ui_sortdialog.h"

class SortDialog : public QDialog, public Ui::SortDialog
{
	Q_OBJECT

public:
	SortDialog(QWidget *parent = 0);

	void SetColumnRange(QChar first, QChar last);

};

#endif /* SORT_SORTDIALOG_H_ */
