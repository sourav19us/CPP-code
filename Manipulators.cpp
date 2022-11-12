#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a = 23.5, b = 2511;

    cout << fixed << setprecision(5) << endl; // apply on alll

    // cout << "a = " << fixed << setprecision(5) << a << endl; // apply on all

    cout << left;
    cout << "a = " << setw(15) << a << endl;
    cout << "b = " << setw(15) << b << endl;

    int c = 1425, d{25174};
    cout << "hex value of c =  " << hex << c << endl;
    cout << "dec value of c =  " << dec << c << endl;
    cout << "oct value of c =  " << oct << c << endl;
    cout << "hex value of c =  " << setbase(16) << c << endl;
    cout << "dec value of c =  " << setbase(10) << c << endl;
    cout << "oct value of c =  " << setbase(8) << c << endl;

    int a1 = 15;
    int b1 = 20;

    cout << setfill('*') << endl;
    cout << setw(15) << a1 << setw(15) << b1 << endl;

    cout << right;

    long double g;
    cout << "enter a1 = ";
    cin >> get_money(g); // Get monetary value

    return 0;
}

/*
    Some important manipulators in <iomanip> are:

    setw (val):         It is used to set the field width in output operations.
    setfill (c):        It is used to fill the character ‘c’ on output stream.
    setprecision (val): It sets val as the new value for the precision of floating-point values.
    setbase(val):       It is used to set the numeric base value for numeric values.
    setiosflags(flag):  It is used to set the format flags specified by parameter mask.
    resetiosflags(m):   It is used to reset the format flags specified by parameter mask.


    Some important manipulators in <ios> are:

    showpos:        It forces to show a positive sign on positive numbers.
    noshowpos:      It forces not to write a positive sign on positive numbers.
    showbase:       It indicates the numeric base of numeric values.
    uppercase:      It forces uppercase letters for numeric values.
    nouppercase:    It forces lowercase letters for numeric values.
    fixed:          It uses decimal notation for floating-point values.
    scientific:     It uses scientific floating-point notation.
    hex:            Read and write hexadecimal values for integers and it works same as the setbase(16).
    dec:            Read and write decimal values for integers i.e. setbase(10).
    oct:            Read and write octal values for integers i.e. setbase(10).
    left:           It adjusts output to the left.
    right:          It adjusts output to the right.
*/