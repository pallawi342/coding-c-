#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
    return 0;

}