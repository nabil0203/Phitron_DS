#include <bits/stdc++.h>
using namespace std;

void func(int *&p)
{
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;

    func(p);

    cout << p;

    return 0;
}