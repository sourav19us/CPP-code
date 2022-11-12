#include <iostream>

using namespace std;

int iota(int a1)
{
    if (a1 == 0)
    {
        return 1;
    }

    return a1 * iota(a1 - 1);
}

// template <class t1=int,class t2,class t3=float>
template <class t>

t sum(t a1, t b2)
{
    return a1 + b2;
}

int main()
{
    int a = 5, b{25};
    // iota(a);
    cout << a << "! = " << iota(a) << endl;
    cout << " sum of tow nub using template function , a+b=" << sum<int>(a, b) << endl;
    float b1{25.36}, b2{36.1425};
    cout << " sum of tow nub using template function , b1+b2=" << sum<float>(b1, b2) << endl;
    cout << " sum of tow nub using template function without \" <float> \" , b1+b2=" << sum(b1, b2) << endl;
    //              or
    // cout << " sum of tow nub using template function , b1+b2=" << sum(b1, b2) << endl; same result

    return 0;
}