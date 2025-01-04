// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/browser-history-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string val;
    while (1)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        l.push_back(val);
    }

    int q;
    cin >> q;
    cin.ignore();

    string a;

    while (q--)
    {
        getline(cin, a);

        stringstream ss(a);
        string word;
        ss >> word;

        if (word == "visit")
        {
            
        }
        else if (word == "prev")
        {
        }
        else if (word == "next")
        {
        }
    }

    return 0;
}