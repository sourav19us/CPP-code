#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{25, 236, 251, 142, 256, 3, 6, 2, 58};

    vector<int>::iterator itr;

    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
        static int a = 0;
        cout << "vec[" << a << "] = " << *itr << endl;
        ++a;
    }

    vec.push_back(142);
    vec.pop_back();

    vector<int>::iterator itr1 = vec.begin();

    vec.insert(itr1 + 2, 102);

    vec.insert(itr1, 5, 1254); // insert(iterator,n,val); n = num of val copy to insert

    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
        static int a = 0;
        cout << "vec[" << a << "] = " << *itr << endl;
        ++a;
    }

    // capacity of vector
    cout << "size of vec = " << vec.size() << endl;
    cout << "max_size of vec = " << vec.max_size() << endl; // 1.07 billion
    cout << "capacity of vec = " << vec.capacity() << endl;

    // element access of vector
    cout << "at 5 of vec = " << vec.at(5) << endl;
    cout << "front of vec = " << vec.front() << endl;
    cout << "back of vec = " << vec.back() << endl;

    // modifiers

    cout << "erase element at 12 " << endl;
    vec.erase(itr1 + 12);
    cout << "erase element from 2 to 12 " << endl;
    vec.erase(itr1 + 2, itr1 + 12); // element erase start from 2+1 to 12

    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
        static int a = 0;
        cout << "vec[" << a << "] = " << *itr << endl;
        ++a;
    }

    vector<int>::iterator itr2 = vec.emplace(vec.begin() + 2, 8);

    vec.emplace(itr2, 9);

    vec.emplace(itr, 25);

    // vec1.swap(vec2);

    cout << "clear element all " << endl;
    vec.clear();
    return 0;
}

/*
    // modifiers{
       assign()	    It assigns new values to the vector.
       push_back()	It adds a new element at the end.
       pop_back()	It removes a last element from the vector.
       empty()	    It determines whether the vector is empty or not.
       insert()	    It inserts new element at the specified position.
       erase()	    It deletes the specified element.
       resize()	    It modifies the size of the vector.
                    // vec.resize(n,val);
                    n : It is the new vector size.
                    val : If n is greater than the current vector size, then value(val)
                    is inserted in the added space.

       clear()	    It removes all the elements from the vector.
       erase()	    It deletes the specified element.
       emplace()	It inserts a new element just before the position pos.
       swap()	    It exchanges the elements between two vectors.
    }

    // element access{
        at()	    It provides a reference to an element.
        back()	    It gives a reference to the last element.
        front()	    It gives a reference to the first element.
    }

    // vector capacity{
        end()	    It refers to the past-lats-element in the vector.
        rend()	    It points the element preceding the first element of the vector.
        rbegin()	It points the last element of the vector.
        begin()	    It points the first element of the vector.
        max_size()	It determines the maximum size that vector can hold.
        size()	    It determines a number of elements in the vector.
        capacity()	It determines the current capacity of the vector.
    }
*/