// Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include<iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    c=a+b;
    if(a!=b)
    cout<<"the sum of two values are :"<<c<<endl;
    else
        cout<<"the sum of the numbers will be triple : "<<c*3<<endl;
    return 0;
}