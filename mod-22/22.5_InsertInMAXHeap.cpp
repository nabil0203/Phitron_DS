#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);                                                           // vector as array
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;                                                                          // the value I want to insert in MAX HEAP
    cin >> val;
    v.push_back(val);                                                                   //  value intserted at the end of Vector



    int child_idx = v.size() - 1;                                                   // the index of the inserted value; we need it to find the parent



    while (child_idx != 0)
    {
        int parent_idx = (child_idx - 1) / 2;                                           // parent index calculated (B-196)

        if(v[parent_idx] < v[child_idx])                                                 // condition of heap
        {
            swap(v[parent_idx], v[child_idx]);
        }

        else
            break;

        child_idx = parent_idx;                                                             // changing the index each time
    }




    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}








/*

Input:
10
23 15 21 13 9 19 8 2 4 7
18


Output:
23 18 21 13 15 19 8 2 4 7 9

*/