#include <iostream>

using namespace std;

void modificar1(int variable)
{
    variable = 30;
}

int modificar2(int &variable)
{
    variable = 30;
    return variable;
}

void modificar3(const int variable)
{
    //variable = 30;
}

int main()
{
    int x,y,z;

    x = y = z = 15;

    modificar1(x);
    modificar2(y);
    modificar3(z);

    cout<<"x: " << x << " y: " << y << " z: " << z << endl;

    z += modificar2(z);
    
    cout<<" z: " << z << endl;
    return 0;
}


