#include "qsettingswidget.h"
#include "ui_qsettingswidget.h"

QSettingsWidget::QSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QSettingsWidget)
{
    ui->setupUi(this);
}

QSettingsWidget::~QSettingsWidget()
{
    delete ui;
}
