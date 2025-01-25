// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/sorted-3-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        set<int> s;

        int n;
        cin >> n;

        while (n--)
        {
            int a;
            cin >> a;
            s.insert(a);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}