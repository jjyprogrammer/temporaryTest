#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "123";
    qDebug() << "hello";
    qDebug() << "myTest";

    return a.exec();
}
