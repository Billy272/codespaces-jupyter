#include<iostream>
#include<string>
using namespace std;
class Classroom
{
private:
string* student;
int numStudents;
int gradeLevel;
public:
Classroom();
~Classroom();
void display();
Classroom& operator=(Classroom&);
};
Classroom::Classroom()
{
int x;
cout << "What grade level is this class? ";
cin >> gradeLevel;
cout << "How many students in this class? ";
cin >> numStudents;
student = new string[numStudents];
for(x = 0; x < numStudents; ++x)
{
cout << "Please enter the student's name ";
cin >> student[x];
}
}
Classroom::~Classroom()
{
delete [] student;
}
void Classroom::display()
{
int x;
cout << "Grade " << gradeLevel <<
" class list:" << endl;
for(x = 0; x < numStudents; ++x)
cout << student[x] << endl;
}
Classroom& Classroom::operator=(Classroom& aClassroom)
{
int x;
gradeLevel = aClassroom.gradeLevel;
numStudents = aClassroom.numStudents;
delete [] student;
student = new string[numStudents];
for(x = 0; x < aClassroom.numStudents; ++x)
{
student[x] = aClassroom.student[x];
}
return *this;
}