#include <iostream>

using namespace std;

class base
{
    int a = 12;
    int b = 152;

public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void get()
    {
        cout << "a=" << a << ", b=" << b << endl;
    }
    // all sum() function is a function_over_loading eg
    void sum()
    {
        cout << "a+b=" << (a + b) << endl;
    }

    void sum(int a1, int b1)
    {
        cout << "a+b=" << a1 + b1 << endl;
    }

    void sum(float a1, float b1)
    {
        cout << "a+b=" << a1 + b1 << endl;
    }

    base(int a1)
    {
    }
    base()
    {
    }
    // opertor overloading

    base operator+(base obj)
    {
        base temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }

    // eg of virtual function

    virtual void display()
    {
        cout << " class base display function" << endl;
    }
};

class draive : public base
{
public:
    void msg()
    {
        cout << " msg function of  class draive" << endl;
    }
};

class draive2 : public base
{
public:
    void msg()
    {
        cout << " msg function of  class draive2" << endl;
    }
};

class draive3 : public draive, public draive2
{
public:
    void msg()
    {
        cout << " msg function of  class draive3" << endl;
    }
};

int main()
{

    base obj, obj1, obj3;
    obj.set(14, 25);
    obj1.set(14, 25);
    obj3 = obj + obj1;
    obj3.get();

    draive3 obj4;
    obj4.msg();
    obj4.draive::display();
    return 0;
}