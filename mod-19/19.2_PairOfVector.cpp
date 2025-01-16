#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector< pair<int,int> > v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first <<" "<<  v[i].second << endl;
    }
    

    return 0;
}





/*
input:
3
23 4
5 3
2 55


Ouput:
23 4
5 3
2 55




*/