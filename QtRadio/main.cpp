#include <QApplication>
#include <QtWidgets>
#include "qmainwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("Fusion");
    
    //QSettingsWidget * settingsWidget = new QSettingsWidget();
    
    QMainWidget * mainWidget = new QMainWidget();
    mainWidget->show();
    
    QWidget window;
    window.resize(320, 240);
    
    window.setWindowTitle(

    QApplication::translate("toplevel", "Top-level widget"));

    QPalette * pal = new QPalette();
    pal->setColor(QPalette::Background, Qt::black);
    pal->setColor(QPalette::Foreground, Qt::green);
    window.setAutoFillBackground(true); 
    window.setPalette(*pal);

    //QLabel * label = new QLabel(&window);
    //label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    //label->setText("first line\nsecond line");
    //label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    //label->show(); 

    //QTabWidget *tabs = new QTabWidget(&window);
    
    //tabs->setFixedSize(320, 240);
    //tabs->addTab(new QWidget(),"Weather");
    //tabs->addTab(new QWidget(),"Radio");    
    //tabs->addTab(new QWidget(),"Wifi");
    //tabs->addTab(new QWidget(),"System");
    
    QFont * clockFont = new QFont("ibm3270", 34, QFont::Bold);      
    
    QString whiteTextSS = "QLabel { background-color : black; color : white; }";
    
    QLabel * clockLabel = new QLabel(&window);
    clockLabel->setFixedSize(160, 60);
    clockLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    clockLabel->setText("19:21");
    clockLabel->setAlignment(Qt::AlignCenter);
    clockLabel->setFont(*clockFont);
    clockLabel->setStyleSheet(whiteTextSS);
    clockLabel->show();    
    
    QLabel * weatherLabel = new QLabel(&window);
    weatherLabel->setFixedSize(160, 60);
    weatherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    weatherLabel->setText("-11C snowing\n740 mm Hg");
    weatherLabel->setAlignment(Qt::AlignCenter);
    weatherLabel->move(160,0);
    weatherLabel->setStyleSheet(whiteTextSS);
    weatherLabel->show();     
    
    QFont * musicFont = new QFont("ibm3270", 12, QFont::Normal);      

    QLabel * musicLabel = new QLabel(&window);
    musicLabel->setFixedSize(320, 160);
    musicLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    musicLabel->setText("\nTitle\nArtist\nAlbum\nGenre\nBitrate\nVolume");
    musicLabel->setAlignment(Qt::AlignLeft);
    musicLabel->setFont(*musicFont);
    musicLabel->move(0,60);
    musicLabel->show();   
    
    QFont * musicFont2 = new QFont("ibm3270", 12, QFont::Bold); 
    
    QLabel * idLabel = new QLabel(musicLabel);
    idLabel->setFixedSize(245, 160);
    idLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    idLabel->setText("\nSieben Köche\nIn Extremo\nSängerkrieg\nMedieval Folk Metal\n1104 kbps\n10");
    idLabel->setAlignment(Qt::AlignLeft);
    idLabel->setFont(*musicFont2);
    idLabel->move(75,0);
    idLabel->show();      
    
    QLabel * statusLabel = new QLabel(&window);
    statusLabel->setFixedSize(320, 20);
    statusLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    statusLabel->setText("WiFi: -56dB, IP: 192.168.0.77");
    statusLabel->setAlignment(Qt::AlignCenter);
    statusLabel->move(0,220);
    statusLabel->show();      
    
    //window.show();

    
    
    return app.exec();
}
