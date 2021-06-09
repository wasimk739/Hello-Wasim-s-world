//   

#include<iostream>
using namespace std;
int main()
{
    int a=57;
    a++;
    cout<<"post increment the value of a by 1 is : "<<a<<endl;
    ++a;
    cout<<"pre increment the value of a by 1 is : "<<a<<endl;
    a=a+1;
    cout<<"after increasing the value of a by 1 is : "<<a<<endl;
    a--;
    cout<<"post decrement the value of a by 1 is : "<<a<<endl;
    --a;
    cout<<"pre decrement the value of a by 1is : "<<a<<endl;
    a=a-1;
    cout<<"after decreasing the value of a by 1 is : "<<a<<endl;
    return 0;
}