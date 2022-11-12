#include <iostream>

using namespace std;

class base
{

public:
    void BaseClassDisplay()
    {
        cout << "this is a BaseClass" << endl;
    }

    class NestedClass
    {
    public:
        void NestedClassdisplay()
        {
            cout << "this is a NestesClass" << endl;
        }
    };
};

// baseClass and NestedClass Methodes must have diff Name.
/*
    The nested class is also a member variable of the enclosing class and has the same access rights as the
    other members.

    However, the member functions of the enclosing class have no special access to the members of a nested
    class.
*/

int main()
{
    base obj1;
    obj1.BaseClassDisplay();

    base::NestedClass obj;
    obj.NestedClassdisplay();
    return 0;
}