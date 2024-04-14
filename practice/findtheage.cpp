#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age ";
    cin>>age;
    if(age<=12)
    {
    cout<<"this is child ";
    }
    else if(age<=18)
    {
    cout<<"this is teenagers ";
    }
    else{
    cout<<"this is adult";
    }
    
    return 0;
}