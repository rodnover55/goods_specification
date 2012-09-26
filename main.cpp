#include <QApplication>
#include <QtDebug>
#include "view/mainwindow.h"
#include "model/configreader.h"
#include "model/applicationconfig.h"
#include "defines.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << "Start";
    ApplicationConfig::initialize(new ConfigReader(ORGANIZATION, APPLICATION_NAME));

    return a.exec();
}
