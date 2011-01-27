#include <iostream>

using namespace std;

int main() {

	int x = 11;
	int y = 12;
	int *z = &x;
	(*z) = 16;
	z = &y;
	y = 4;

	cout << x << " " << y << " " << (*z) << endl;

	return 0;
}
