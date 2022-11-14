#include <iostream>
#include "./HeaderFiles/sum.h"

using namespace std;

class AbstClass : public mathe
{
public:
    virtual void display() = 0;
    void msg()
    {
        cout << " this is a \" msg() \" function of Abstract class " << endl;
    }
};

class draive : public AbstClass
{

public:
    void display()
    {
        cout << " msg display " << endl;
    }
};

int main()
{
    // AbstClass obj;// --->> * due to pure virtual function in  class. we can't make a object
    draive obj;
    obj.msg();
    cout << "a+b=" << obj.sum(5, 14) << endl;
    obj.display();

    return 0;
}