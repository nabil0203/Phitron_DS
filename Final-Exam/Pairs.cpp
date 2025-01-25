// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/pairs-17

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string s;
    int i;

    Student(string s, int i)
    {
        this->s = s;
        this->i = i;
    }
};

class comp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.s > r.s)
            return true;
        else if (l.s < r.s)
            return false;
        else
            return l.i < r.i;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, comp> pq;

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        int a;

        cin >> s >> a;

        Student obj(s, a);

        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().s << " " << pq.top().i << endl;
        pq.pop();
    }

    return 0;
}