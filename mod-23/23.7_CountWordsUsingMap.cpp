/*

Take a sentence as a input. Count the Frequency of the each word 

input:
I love football He loves football we love football they love cricket.

ouput:



*/






#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);                                       // used to sepatare each word

    string word;

    map<string, int> mp;

    while (ss >> word)                                       // each word is counting by map
    {
        mp[word]++;
    }


    for(auto it = mp.begin(); it != mp.end(); it++)                                             // printing the map
    {
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}