//given the redius of the circle predict whether numerically area of this circle is larger than the circumfrence or not
#include<iostream>
using namespace std;
int main()
{
    int r, cir,area;
    cout<<"enter the value of r ";
    cin>>r;
    area=3.14*r*r;
    cir=2*3.14*r;
    if(area>cir)
    {
        cout<<"area is greater than circumfrence";
    }
    else if(area<cir)
    {
        cout<<"area is not greater than circumfrence";
    }
    else
    {
        cout<<"area is equal to the circumfrence";
    }
    return 0;
}