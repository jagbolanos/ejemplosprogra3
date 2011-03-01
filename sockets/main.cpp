#include <QtCore/QCoreApplication>
#include <QTcpServer>
#include <QTcpSocket>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    bool timedOut;

    QCoreApplication a(argc, argv);



    QTcpServer *server = new QTcpServer(&a);
    if (!server->listen(QHostAddress::Any, 8080)) {
        cout << "No se pudo conectar" << endl;
    } else {
        cout << "Conectado" << endl;
        if (server->waitForNewConnection(-1, &timedOut)) {
            cout << "Se recibió una conexión" << endl;
            QTcpSocket *remoto = server->nextPendingConnection();
            remoto->write("HOLA MUNDO\n", 256);
            remoto->flush();

            delete remoto;
        } else {
            if (timedOut) {
                cout << "No se recibió ninguna conexión en el tiempo especificado" << endl;
            }
            cout << "No hubo conexión" << endl;
        }
        server->close();
    }

    delete server;

    return a.exec();

}
