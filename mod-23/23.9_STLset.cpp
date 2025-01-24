#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);                                                              // inserting values into the Set stl
    }

    for(auto it = s.begin(); it != s.end(); it++)                                 // printing set (Ascending order & Duplicate Removed)
    {
        cout << *it << endl;
    }


    return 0;
}





/*

input:
10
2 3 4 2 3 5 1 8 2


output:
1
2
3
4
5
8

*/