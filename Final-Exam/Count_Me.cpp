// did not completed


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        
        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }

        
    }

    return 0;
}