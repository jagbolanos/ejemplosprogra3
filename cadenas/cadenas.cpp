#include <iostream>
#include <string.h>

using namespace std;

void descomponer(char *texto, int n) {
    for (int i = 0; i<n; i++) {
        cout << (int)texto[i] << endl;
        if (texto[i] == 0)
            break;
    }
}
int main() {
    char texto[10] = "mundo";
    char textogrande[100] = "hola ";
    
    cout << texto << endl;
    descomponer(texto, 10);
    
    strcat(textogrande, texto);
    
    cout << textogrande << endl;
    descomponer(textogrande, 100);
    
    return 0;

}