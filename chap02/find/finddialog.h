#ifndef FIND_FINDDIALOG_H_
#define FIND_FINDDIALOG_H_

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
	Q_OBJECT

public:
	FindDialog(QWidget* parent = 0);

	const QCheckBox* getChkBackwards() const { return chkBackwards; }
	const QCheckBox* getChkCase() const { return chkCase; }

signals:
	void findNext(const QString& str, Qt::CaseSensitivity cs);
	void findPrevious(const QString& str, Qt::CaseSensitivity cs);

private slots:
        void findClicked();
        void enableFindButton(const QString& text);

private:
        QLabel* label;
        QLineEdit* lineEdit;
        QCheckBox* chkCase;
        QCheckBox* chkBackwards;
        QPushButton* findButton;
        QPushButton* closeButton;
};



#endif /* FIND_FINDDIALOG_H_ */
