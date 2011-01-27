#include <iostream>

using namespace std;

int main() {

	int x = 13;
	int y = 1;
	int *z = &y;
	y = 25;
	(*z) = 16;
	z = &x;
	x = 8;


	cout << x << " " << y << " " << (*z) << " " << z << endl;

	return 0;
}
