#include<iostream>
using namespace std;

class rectangle
{
    double length,width;
    public:
    ~rectangle(){}
    rectangle()
    void set_length(double);
    void set_width(double);
    double calc_area();
    double calc_perimeter();
    void display();
};
rectangle::rectangle()
{
    length=1;
    width=1;
}
void rectangle::set_length(double)
{
    length = l;
}
void rectangle::set_width(double)
{
    width = w;
}
double rectangle::calc_area()
{
    return(length*width);
}
double rectangle::calc_perimeter()
{
    return(2*(length+width));
}
void rectangle::display()
{
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Area: "<<calc_area()<<endl;
    cout<<"Perimeter: "<<calc_perimeter()<<endl;
}
int main()
{
    double length, width;
    rectangle R[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Length and Width: "<<endl;
        cin>>length>>width;
        R[i].set_length(length);
        R[i].set_width(width);
        R[i].display();
    }
    return 0;
}