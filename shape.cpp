#include<iostream>
using namespace std;

class shape
{
    public:
      virtual double calcarea()
      {
         return 0;
      }
};

class circle:public shape
{
    private:
        double radius;
    public:
        double calcarea()
        {
            cout<<"Enter the radius: ";
            cin>>radius;
            return(3.14*radius*radius);
        }
};
class square:public shape
{
    private:
        double length;
    public:
        double calcarea()
        {
            cout<<"Enter the length: ";
            cin>>length;
            return(length*length);
        }
};

int main()
{
    shape *ptr;
    ptr=new circle;
    cout<<ptr->calcarea();
    ptr=new square;
    cout<<ptr->calcarea();
    delete ptr;
    return 0;
}