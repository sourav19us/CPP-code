#include <iostream>

using namespace std;

class base
{

    int a;
    int b;

public:
    void display()
    {
        cout << "This is base class display" << endl;
    }
};

class draive : public base
{

public:
    void OutPutMsg()
    {
        cout << "this is a draive class" << endl;

        // call base class mathode
        base::display();
    }
};

class draive2 : public draive
{
public:
    void draiveMsg()
    {
        base::display();
        draive::OutPutMsg();
    }
};

int main()
{
    draive2 obj;
    obj.draiveMsg();
    return 0;
}