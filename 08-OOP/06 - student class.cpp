#include <iostream>
using namespace std;

class Student
{
    private:
        int rollNo;
        string name;
        int maths;
        int phy;
        int chem;

    public:
        Student(int usn,string name,int m,int p,int c);

        int total();
        float average(int total);
        void grade(float avg);
};

Student::Student(int usn,string name,int m,int p,int c)
{
    rollNo = usn;
    this->name = name;
    maths = m;
    phy = p;
    chem = c;
}

int Student::total()
{
    return maths + phy + chem;
}

float Student::average(int total)
{
    return total / 3.0;
}

void Student::grade(float avg)
{
    if(avg >= 80 && avg <= 100)
        cout << "Grade A" << endl;

    else if(avg >= 40)
        cout << "Grade B" << endl;

    else
        cout << "Grade C" << endl;
}

int main()
{
    int rollNo,m,p,c;
    string name;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the marks in 3 subjects: ";
    cin >> m >> p >> c;

    Student s(rollNo,name,m,p,c);

    int total = s.total();

    cout << "Total: " << total << endl;

    float avg = s.average(total);

    cout << "Average: " << avg << endl;

    cout << "Result: ";
    s.grade(avg);

    return 0;
}
