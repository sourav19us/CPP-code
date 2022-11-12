#include <iostream>

// micro eg

#define pi 3.14

#define sum(a, b) a + b // eg of generic programming

#define logicl(a, b) (a > b) ? a : b // eg of generic programming

using namespace std;

int main()
{
    int a = 25, b = 55, c;
    /*
        int a {25},b {55};
    */
    int f{23}, h{2255}; // <<<<<<<<<<<<<<<<
    cout << "a+b = " << sum(a, b) << endl;
    c = logicl(a, b);
    cout << "logic(a,b) micro " << c << endl;

    cout << " f = " << f << endl;
    cout << " h = " << h << endl;

    return 0;
}