#ifndef QSETTINGSWIDGET_H
#define QSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class QSettingsWidget;
}

class QSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QSettingsWidget(QWidget *parent = nullptr);
    ~QSettingsWidget();

private:
    Ui::QSettingsWidget *ui;
};

#endif // QSETTINGSWIDGET_H
