#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator test_translator;
    test_translator.load("TestQTDPI_zh_CN");
    a.installTranslator(&test_translator);

    MainWindow w;
    w.show();

    return a.exec();
}
