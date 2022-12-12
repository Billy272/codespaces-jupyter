#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Enter 2 values: \n";
    cin>> x>>y;
    cout<<"Maximum Value: "<<max_two(x,y);
    return 0;
}
int max_two( int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}