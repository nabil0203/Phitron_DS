#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;                     // maximum priority queue

    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;               // 30


    pq.push(100);
    cout << pq.top() << endl;               // 100

    pq.pop();                               // 100
    pq.pop();                               // 30
    cout << pq.top() << endl;               // 10








    priority_queue<int, vector<int>, greater<int>> pq1;                     // minimum priority queue

    pq1.push(10);
    pq1.push(5);
    pq1.push(30);
    cout << pq1.top() << endl;               // 5


    pq1.push(2);
    cout << pq1.top() << endl;               // 2

    pq1.pop();                               // 2
    pq1.pop();                               // 5
    cout << pq1.top() << endl;               // 10




    return 0;
}