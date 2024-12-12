// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// ~~~~~Brute Force~~~~~~~~
// TLE (B-16)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n + 1);                       // index starts from 1 that's why 1 extra index is needed

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }


    // for (int i = 0; i < q; i++)
    // {
    //     // using while insted
    //     // shortcut for test cases input
    // }




    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}