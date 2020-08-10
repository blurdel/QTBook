#include <QApplication>

#include "finddialog.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    FindDialog *dlg = new FindDialog;
    dlg->show();
    return app.exec();
}
