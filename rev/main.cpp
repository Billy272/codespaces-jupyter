#include<iostream>
using namespace std;

class  iemployee
{
    virtual void AskForPromotion()=0;
};
class employee:iemployee
{
    private:
        string Company;
        int Age;
    protected:
        string Name;
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
            if(age<=20)
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
        void AskForPromotion()
        {
            if(Age>30)
            {
                cout<<Name<<" is promoted!"<<endl;
            }
            else
            {
                cout<<Name<<" is not promoted!"<<endl;
            }
        }
        void work()
        {
            cout<<Name<<" is walking,task,performing tasks..."<<endl;
        }
};

class Developer: public employee
{
    public:
        string FavProgLanguage;
        Developer(string name, string company,int age,string favProgLanguage)
            :employee(name,company,age)
        {
            FavProgLanguage=favProgLanguage;
        }
        void FixBug()
        {
            cout<<getName()<<" fixed a bug using " <<FavProgLanguage<<" \n";
        }

};

class Teacher : employee
{
    public:
    string Subject;
    void prepareLesson()
    {
        cout<<getName()<<" teaches "<<Subject<<endl;
    }
    Teacher(string name, string company,int age,string subject)
    :employee(name,company,age)
    {
        Subject = subject;
    }
}
int main()
{
    Developer d=Developer("Billy","Microsoft",20,"C++");
   Teacher t=Teacher("Jack","Hommie3",38,"History");
   d.work();
   t.work();
   return 0;
};