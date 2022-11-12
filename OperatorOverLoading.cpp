#include <iostream>

using namespace std;

class compx
{
public:
    float a;
    compx(float a1) : a{a1}
    {
        cout << "a = " << a << endl;
    }
    compx()
    {
        a = 0;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }

    // operator overloading eg ,( +, - , /, *) operator overload

    compx operator+(compx obj)
    {
        compx temp;
        temp.a = a + obj.a;
        return temp;
    }
    compx operator-(compx obj)
    {

        compx temp;
        temp.a = a - obj.a;
        return temp;
    }

    compx operator*(compx obj)
    {

        compx temp;
        temp.a = a * obj.a;
        return temp;
    }

    compx operator/(compx obj)
    {
        compx temp;
        temp.a = a / obj.a;
        return temp;
    }
};

int main()
{
    compx obj1(45), obj2(258), obj3(2514), obj4;

    obj4 = obj1 + obj2 + obj3;

    obj4.display();

    obj4 = obj1;
    obj4.display();

    obj4 = obj1 - obj2 - obj3;
    obj4.display();

    obj4 = obj1 * obj2 * obj3;
    obj4.display();

    obj4 = obj1 / obj2 / obj3;
    obj4.display();

    return 0;
}