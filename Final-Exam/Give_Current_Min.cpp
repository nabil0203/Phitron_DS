// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/give-max-min

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;                                  // minimum heap
    while (n--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }




    int query;
    cin >> query;
    while (query--)
    {
        int z;
        cin >> z;

        if (z == 0)
        {
            int x;
            cin >> x;
            pq.push(x);                                                         // inserting new value

            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }

        if (z == 1)
        {
            // print minimum
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }

        if (z == 2)
        {
            // delete minimum
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();

                if (pq.empty())
                    cout << "Empty" << endl;                            // print current minimum
                else
                    cout << pq.top() << endl;
            }
        }
    }
    return 0;
}