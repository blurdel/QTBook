#include <QtWidgets>

#include "sortdialog.h"

SortDialog::SortDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);

	secondGroupBox->hide();
	thirdGroupBox->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);

	SetColumnRange('A', 'Z');
}

void SortDialog::SetColumnRange(QChar first, QChar last)
{
	primaryColCombo->clear();
	secondColCombo->clear();
	thirdColCombo->clear();

	secondColCombo->addItem(tr("None"));
	thirdColCombo->addItem(tr("None"));
	primaryColCombo->setMinimumSize(secondColCombo->sizeHint());

	QChar ch = first;
	while (ch <= last) {
		primaryColCombo->addItem(QString(ch));
		secondColCombo->addItem(QString(ch));
		thirdColCombo->addItem(QString(ch));
		ch = ch.unicode() + 1;
	}


}


