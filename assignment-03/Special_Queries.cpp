// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/special-queries-1-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    queue<string> q;
    
    while (t--)
    {

        int x;
        cin >> x;

        if (x == 0)
        {
            string a;
            cin >> a;

            q.push(a);
        }

        else if (x == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}