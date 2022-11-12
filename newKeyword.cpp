#include <iostream>

using namespace std;

int main()
{
    // new keyword
    int a;
    int *var;
    var = new int(50);
    cout << *var << endl;
    cout << " sizeof() , size of var = " << sizeof(var) << endl;
    cout << " sizeof() , size of a = " << sizeof(a) << endl;

    /*
        Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of
                                    type data type.

        "pointer-variable = new data-type[size];"
    */

    int *p = new int[40]; // p[0] refers to the first element, p[1] refers to the second element, and so on.
    cout << " sizeof() , size of p = " << sizeof(p) << endl;

    delete var;
    delete p;
    return 0;
}