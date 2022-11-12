#include <iostream>

using namespace std;

void swap(int &a1, int &b1)
{
    int tamp = a1;
    a1 = b1;
    b1 = tamp;
}

int main()
{
    int a = 55, d = 255;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, d);
    cout << "a = " << a << endl;
    cout << "d = " << d << endl;

    return 0;
}