#include <QKeyEvent>
#include "qmainwidget.h"
#include "ui_qmainwidget.h"

#include "qsettingswidget.h"

QMainWidget::QMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QMainWidget)
{
    ui->setupUi(this);
}

QMainWidget::~QMainWidget()
{
    delete ui;
}

void QMainWidget::keyPressEvent(QKeyEvent *event)
{
    //todo: up and down keys for volume

    if(event->key() == Qt::Key_Escape)
    {
        this->hide();
        QSettingsWidget * settingsWidget = new QSettingsWidget();
        settingsWidget->show();
    }
    else
        QWidget::keyPressEvent(event);
}
