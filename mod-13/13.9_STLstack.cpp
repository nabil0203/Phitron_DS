#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> sta;                  // stack STL


    int size;
    cin >> size;

    for (int i = 0; i < size; i++)                  //input
    {
        int val;
        cin >> val;

        sta.push(val);
    }



    while (!sta.empty())                            // output
    {
        cout << sta.top() << endl;

        sta.pop();
    }
    


    return 0;
}