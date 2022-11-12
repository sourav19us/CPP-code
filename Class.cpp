#include <iostream>

using namespace std;

class base
{
public:
    int a;
    int b;
    base(int a1, int b1) : a{a1}, b{b1}
    {
        // a = a1;
        // b = b1;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    base(float c1 = 255.25, int d1 = 142) // default constructor
    {
        a = c1;
        b = d1;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    base() // default constructor
    {
        a = 55;
        b = 555;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    ~base() // destructor
    {
    }
};

class chail : public base
{
    int c;

public:
    chail(int t1, int t2, int t3) : base(t1, t2)
    {

        c = t3;
        display();
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
// base::base(int a1, int b1)
//     base::base(float c1 = 25, int d1 = 848)

//         base::base()

int main()
{
    base obj(25, 69), obj2(2, 5);
    base obj1(5);
    chail obj4(14, 25, 96);
    return 0;
}