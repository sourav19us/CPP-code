#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> new_list{12, 25, 12, 25, 47, 36, 15, 48, 19, 25, 12};

    list<int> new_list2{14, 125, 14, 25, 8, 36, 45458};

    new_list.merge(new_list2);

    list<int>::iterator itr = new_list.begin();

    for (itr; itr != new_list.end(); itr++)
    {
        cout << *itr << endl;
    }

    return 0;
}

/*
    reverse()       It reverses the elements of the list.                       // list_name.reverse();
    sort()          It sorts the elements of the list in an increasing order.   // list_name.sort();
    merge()         It merges the two sorted list.
    splice()        It inserts a new list into the invoking list.
    unique()        It removes all the duplicate elements from the list.        // list_name.unique();
    resize()        It changes the size of the list container.
*/

// list_name.sort();  in char type take first Capital latter and after small latter
// sorts the character values on the basis of their ascii values.