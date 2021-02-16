#ifndef QMAINWIDGET_H
#define QMAINWIDGET_H

#include <QWidget>

namespace Ui {
class QMainWidget;
}

class QMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QMainWidget(QWidget *parent = nullptr);
    ~QMainWidget();

private:
    Ui::QMainWidget *ui;
    void keyPressEvent(QKeyEvent *event);
};

#endif // QMAINWIDGET_H
