#include <iostream>
using namespace std;

void aryfun(int *ary1)
{

    for (int i = 0; i < 5; i++)
    {
        cout << ary1[i] << "\t";
    }
}

void aryfun1(int ary1[5])
{

    for (int i = 0; i < 5; i++)
    {
        cout << ary1[i] << "\t";
    }
}

int main()
{

    int ary[5] = {47, 58, 69, 25, 55};

    aryfun(ary);
    cout << endl;
    aryfun1(ary);
    cout << endl;

    int ary1[5];
    int a = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << " ary1[" << i + 1 << "] = ";
        cin >> ary1[i];
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        a = a + ary1[i];
    }

    cout << "a = " << a << endl;
    cout << "a/5 = " << a / 5 << endl;

    int ary2[5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (ary1[i] > ary1[j])
            {
                ary2[i] = ary1[i];
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ary2[i] << "\t";
    }

        return 0;
}
