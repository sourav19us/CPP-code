#include <iostream>
#include "./HeaderFiles/sum.h" // user defined header file
using namespace std;

int main()
{
    int a = 25;
    int b = 14;
    cout << " a + b = " << sum(a, b) << endl;
    cout << " a - b = " << sub(a, b) << endl;
    cout << " a * b = " << mult(a, b) << endl;
    cout << " a % b = " << modl(a, b) << endl;

    mathe obj;
    cout << " a + b = " << obj.sum(a, b) << endl;
    cout << " a - b = " << obj.sub(a, b) << endl;
    cout << " a * b = " << obj.mult(a, b) << endl;
    cout << " a % b = " << obj.modl(a, b) << endl;
    return 0;
}