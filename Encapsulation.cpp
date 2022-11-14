#include <iostream>
#include <iomanip>

using namespace std;

class base
{
private:
    int a = 0;
    int b = 0;

public:
    base()
    {
        get();
        display();
    }

    void get()
    {

        cout << " a = ";
        cin >> a;
        cout << " b = ";
        cin >> b;
    }
    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};

int main()
{
    base obj;
    return 0;
}