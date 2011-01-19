#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char cadena1[20] = "Hola";
    char cadena2[20] = "Mundo";
    
    
    cout << strlen(cadena1) << endl;
    strcat(cadena1, " ");
    strcat(cadena1, cadena2);
    cout << cadena1 << endl;
    
    return 0;
}
