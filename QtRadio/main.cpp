#include <QApplication>
#include <QtWidgets>
#include "qmainwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("Fusion");

    QMainWidget * mainWidget= new QMainWidget();
    mainWidget->show();
    
    return app.exec();
}
