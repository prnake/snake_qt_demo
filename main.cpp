#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QObject>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    MainWindow w;
    w.show();
    return app.exec();
}
