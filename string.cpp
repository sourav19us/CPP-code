#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    string fullName, fullName2;
    cout << " enter fullName1 =";
    // cin >> fullName;
    getline(cin, fullName);
    cout << "fullName is " << fullName << endl;

    // string fullName2;
    cout << "enter your fullName2 = ";
    getline(cin, fullName2);
    cout << "fullName2 is " << fullName2 << endl;

    // int a;
    // cout << "a=";
    // cin >> a;
    // cout << "a = " << a << endl;
    // cout << " a  = ";
    // cin >> a;
    // cout << "a = " << a << endl;

    // >>>>>> Operations on Strings <<<<<<
    /*
        1.getline()	    This function is used to store a stream of characters as entered by the user in the
                        object memory.

        2.push_back()	This function is used to input a character at the end of the string.

        3.pop_back()	Introduced from C++11(for strings), this function is used to delete the last character
                        from the string.
    */

    /*
         >>>>> Strings - Special Characters <<<<<<

         Escape character	        Result	            Description
     1.    \'	                      '	                    Single quote
     2.    \"	                      "	                    Double quote
     3.    \\	                      \	                    Backslash

    */
    fullName2.push_back('K');
    cout << "fullName2 is after \" push_back('k') \"  " << fullName2 << endl;
    fullName2.pop_back();
    cout << "fullName2 is after \" pop_back()\" " << fullName2 << endl;
    fullName2 = fullName2 + fullName;
    cout << "fullName2 +fullNmae" << fullName2 << endl;

    /*
        >>>>>>  Capacity Functions  <<<<<<

        capacity()	    This function returns the capacity allocated to the string, which can be equal to or more
                        than the size of the string. Additional space is allocated so that when the new characters
                        are added to the string, the operations can be done efficiently.

        resize()	    This function changes the size of the string, the size can be increased or decreased.

        length()	    This function finds the length of the string.

        shrink_to_fit()	This function decreases the capacity of the string and makes it equal to the minimum
                        capacity of the string. This operation is useful to save additional memory if we are
                        sure that no further addition of characters has to be made.
    */

    string str = "This function swaps one string with other";

    cout << "length of str \' string \' is " << str.length() << endl;
    cout << "capacity of str \' string \' is " << str.capacity() << endl;

    str.resize(35);
    cout << "capacity of str \' string \' after resize is " << str.capacity() << endl;

    str.shrink_to_fit();
    cout << "capacity of str \' string \' after shrink is " << str.capacity() << endl;
    cout << "length of str \' string \' is " << str.length() << endl;

    /*
         Iterator Functions

        begin()	    This function returns an iterator to the beginning of the string.

        end()	    This function returns an iterator to the end of the string.

        rbegin()	This function returns a reverse iterator pointing at the end of the string.

        rend()	    This function returns a reverse iterator pointing at beginning of the string.
    */

    /*
         Manipulating Functions:

         copy(“char array”, len, pos) 	This function copies the substring in the target character array
                                         mentioned in its arguments. It takes 3 arguments, target char array,
                                         length to be copied, and starting position in the string to start
                                         copying.

         swap()	                        This function swaps one string with other. eg. str1.swap(str2);
    */

    string str1 = "This function swaps one string with other.";
    string str2 = "geeksforgeeks is for geeks";
    char ch[50];
    str1.copy(ch, 15, 0);
    cout << "\" copy(“char array”, len, pos) function  \" " << ch << endl;
    str1.copy(ch, 15, 5);
    cout << "\" copy(“char array”, len, pos) function  \" " << ch << endl;

    str1.swap(str2);
    cout << "str1 string is " << str1 << endl;
    cout << "str2 string is " << str2 << endl;
}