#include <iostream>

using namespace std;

void swap(int *a1, int *b1)
{

    int c = *a1;
    *a1 = *b1;
    *b1 = c;
}

int main()
{
    int a = 25;
    int d = 255;
    int *b = &a; // pointer
    /*
        int *b;
        b=&a;
    */
    int **c = &b; // pointer to pointer

    cout << " a = " << a << endl;
    cout << "(\"&a\" gives address of a ) a = " << &a << endl;
    cout << " ( \"b\" gives address of a) b = " << b << endl;
    cout << "(\"*b \") gives value of a that store in b , *b=" << *b << endl;
    cout << "(\"&b \") gives address of b , &b=" << &b << endl;

    cout << "swap a tow nub useing pointer" << endl;
    cout << " a and d value before swap" << endl;
    cout << " a = " << a << endl;
    cout << " d = " << d << endl;

    swap(&a, &d);
    cout << " a and d value after swap" << endl;
    cout << " a = " << a << endl;
    cout << " d = " << d << endl;

    int ary[5] = {47, 58, 69, 25, 55};

    int *aryptr = ary;
    cout << "*(aryptr+1) = " << *(aryptr + 1) << endl;
    cout << " aryptr[1] = " << aryptr[1] << endl;
    cout << " *aryptr = " << *aryptr << endl;

        return 0;
}