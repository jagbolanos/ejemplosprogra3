#include <QtCore/QCoreApplication>
#include <QTcpSocket>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char buffer[256];
    long bytesRead = 0;

    QCoreApplication a(argc, argv);

    QTcpSocket *remoto = new QTcpSocket(&a);
    remoto->connectToHost("127.0.0.1",8080, QIODevice::ReadWrite);


    if (remoto->isValid() ) {
        remoto->waitForReadyRead(-1);
        bytesRead = remoto->read(buffer, 256);
        cout << "leido: " << bytesRead << endl;
        if (bytesRead != -1 ) {
            cout << buffer << endl;
        } else {
            cout << "No se pudo leer" << endl;
        }

        remoto->disconnect();
    } else {
        cout << "No se pudo conectar" << endl;
    }
    delete remoto;
    return a.exec();
}
