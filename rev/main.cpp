#include<iostream>
using namespace std;

class employee
{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name)
        {
            Name = name;
        }
        string getName()
        {
            return Name;
        }
        void setCompany(string company)
        {
            Company = company;
        }
        string getCompany()
        {
            return Company;
        }
        void setAge(int age)
        {
            Age = age;
        }
        int getAge()
        {
            return Age;
        }
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

    employee1.setAge(40);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<< "years old.";
};