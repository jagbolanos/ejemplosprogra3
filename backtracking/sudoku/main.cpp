#include <iostream>
#include <fstream>

using namespace std;

void leer_archivo(char* nombre, int sudoku[9][9]) {
    ifstream archivo(nombre, ifstream::in);
    
    for (int i = 0; i<9 ; i++) {
        for (int j = 0; j < 9; j++) {
            archivo >> sudoku[i][j];
        }
    }
}

void imprimir_sudoku(int sudoku[9][9]) {

    
    for (int i = 0; i<9 ; i++) {
        if ( i % 3 == 0)
            cout << endl;
        for (int j = 0; j < 9; j++) {
            if ( j % 3 == 0)
                cout << " | ";
            if (sudoku[i][j] == 0) {
                cout << ". ";
            } else {
                cout << sudoku[i][j] << " ";
            }
        }
        cout << endl;
    }
}

bool validar(int matriz[9][9], int f, int c) {
    int valor = matriz[f][c];
    //Columna
    for(int i=0;i<9;i++) {
        if (i != c && matriz[f][i] == valor)
            return false;
    }
    
    //Fila
    for(int i=0;i<9;i++) {
        if (i != f && matriz[i][c] == valor)
            return false;
    }
    //Cuadro
    for (int i= (f / 3) * 3 ; i <= (f / 3) * 3 + 2; i ++) {
        for (int j= (c / 3) * 3 ; j <= (c / 3) * 3 + 2; j ++) {
            if ( i != f && j != c && matriz[i][j] == valor)
                return false;
        }
    }
    return true;
}

bool sudoku(int matriz[9][9], int f, int c);

int main(int argc, char** argv) {
    int matriz[9][9];
    
    if (argc != 2) {
        cout << "Uso: debe pasar el archivo con el sudoku como parametro" << endl;
        return 0;
    }
    
    leer_archivo(argv[1], matriz);
    
    imprimir_sudoku(matriz);
    
    sudoku(matriz, 0, 0);
    
    imprimir_sudoku(matriz);
    
    return 0;
}
