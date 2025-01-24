#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["tamim"] = 2;
    mp["ramim"] = 5;
    mp["shamim"] = 44;

//  cout << mp["ramim"];        // 5


    for(auto it = mp.begin(); it != mp.end(); it++)                                             // map doesn't have any index; so, using iterator
    {
        cout << it->first << " " << it->second << endl;
    }
    


    return 0;
}