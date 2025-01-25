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




class cmp                                                    // custom compare class
{
    public:
    bool operator()(Student l, Student r)                       // 'operator()()' - is a syntax; this can not be changed
    {
        return l.marks > r.marks;                               // this will sort in ascending order (custom compare function er ulta)
//      return l.marks < r.marks;                               // this will sort in decending order (custom compare function er ulta)
    }
};




int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;                           // student class type Priority Queue; minimum priority queue format; custom compare class 'cmp'



    int n;
    cin >> n;                                                            // how many sutdents



    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        Student obj (name, roll, marks);                            // creating object for each student

        pq.push(obj);                                               // pushing every object into the queue
    }
    


    while (!pq.empty())                                                                         // print
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    




    return 0;
}
