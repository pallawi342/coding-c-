#include<iostream>
using namespace std;
int main()
{
    int hindi, english, maths, science, drawing;
    cout<<"enter the hindi marks: ";
    cin>>hindi;
    cout<<"enter the english marks: ";
    cin>>english;
    cout<<"enter the maths marks: ";
    cin>>maths;
    cout<<"enter the science marks: ";
    cin>>science;
    cout<<"enter the drawing marks: ";
    cin>>drawing;
    
    float percentage;
    percentage=((hindi+english+maths+science+drawing)*100)/500;
cout<<"percentage of 5 subjects: "<<percentage<<endl;
return 0;
}