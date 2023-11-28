#include <QApplication>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QPushButton hello("Hello duangxin!");
    hello.resize(50,30);
    hello.show();
    return app.exec();
}
