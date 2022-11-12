#include <iostream>

using namespace std;

// micro ex
#define pi 3.14

// typedef ex
typedef int integer;

int main()
{

    int a = 155, b = 255, c;
    c = a + b;
    cout << " enter a =";
    cin >> a;
    cout << " enter b =";
    cin >> b;
    cout << "a+b = " << c << endl;
    cout << "a-b = " << (a - b) << endl;
    cout << "a+=20 =" << (a += 20) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "a && b = " << (a && b) << endl;
    cout << "Bitwise Opertora" << endl;
    cout << "a & b =" << (a & b) << endl;
    cout << "a | b =" << (a | b) << endl;
    cout << "a = ~ b =" << (a = ~b) << endl;
    cout << " a ^ b = " << (a ^ b) << endl;
    cout << "a >> b = " << (a >> b) << endl;
    cout << "a << b = " << (a << b) << endl;

    // Conditional or Ternary Operator (?:)
    (a > b) ? cout << " a>b " << endl : cout << " a < b " << endl;

    integer d = 25;
    cout << "d = " << d << endl;
    cout << "d*pr = " << d * pi << endl;

    // typecasting ex
    float ch = 25.265;

    d = (int)ch;
    cout << "  d =" << d << endl;

    return 0;
}