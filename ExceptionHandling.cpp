#include <iostream>

using namespace std;

int divide(int a1, int b1)
{

    try
    {
        int a = b1 / a1;
        cout << "a/b = " << a << endl;
        throw a;
        return 0;
    }
    catch (int a)
    {
        cout << " run time error bcz a = " << a << " b value  must be b != 0" << endl;
    }
    catch (...)
    {
        cout << "compile time error" << endl;
        return 0;
    }
}

void divide2(int a1, int b1)
{

    try
    {
        if (b1 == 0)
        {
            throw(b1);
        }
        else
        {
            cout << " a / b = " << a1 / b1 << endl;
            throw "a";
        }
    }
    catch (int b)
    {
        cout << " run time error bcz b = " << b << " b value  must be b != 0" << endl;
    }
    catch (...)
    {
        cout << " no run time error " << endl;
    }
}

int main()
{
    int a = 1;
    int b = 10;
    divide(a, b);
    divide2(a, b);
    return 0;
}