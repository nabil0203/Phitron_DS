// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/v2-2-2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        vector<int> v2 = v;
        sort(v2.begin(), v2.end());

        if (v2 == v)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}