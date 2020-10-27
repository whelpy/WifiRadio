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
    QSettingsWidget * settingsWidget = new QSettingsWidget();
    settingsWidget->show();

    QWidget::keyPressEvent(event);
}
