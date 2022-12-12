#include<iostream>
using namespace std;

class employee
{
    public:
        string Name;
        string Company;
        int Age;

        void introduction(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }
        employee(string name, string company,int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};
int main()
{
    employee employee1 = employee("Billy","Microsoft",20);
    employee1.introduction();

    employee employee2 = employee("Willy","Google",20);
    employee2.introduction();
};