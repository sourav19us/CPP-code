#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> map1{{"shikha", 10014}, {"sourav", 1005}, {"gourav", 1006}, {"jon", 1007}, {"joy", 2514}};

    map1["sain"] = 142;

    map1.insert({{"Hello", 10245}, {"hi", 1425}});

    map<string, int>::iterator itr = map1.begin();

    for (itr; itr != map1.end(); itr++)
    {
        cout << "[" << (*itr).first << "] = " << (*itr).second << endl;
    }

    return 0;
}