// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/get-current-max

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks != r.marks)
            return l.marks < r.marks;

        return l.roll > r.roll;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, comp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);

        pq.push(obj);
    }

    int query;
    cin >> query;
    while (query--)
    {
        int z;
        cin >> z;

        if (z == 0)
        {
            string name;
            int roll, marks;

            cin >> name >> roll >> marks;

            Student obj(name, roll, marks);

            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        if (z == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        if (z == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();

                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }
    return 0;
}