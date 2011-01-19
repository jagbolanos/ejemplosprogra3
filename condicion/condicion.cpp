#include <iostream>

using namespace std;

int main() {
    //int x = y = z = w = 30;
	int x = 0, y = 1;
    if (x++ || y-- || (--y && --x)) {
		cout << "La condicion es verdadera" << endl;
	} else {
		cout << "La condicion es falsa" << endl;
	}
	cout << "x: " << x << "y: " << y << endl;
	return 0;
}
