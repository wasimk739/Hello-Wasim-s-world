#include<iostream>
using namespace std;

int diff(int n)
{
    const int a=51;
    return n>a ? (n-a)*3:n-a;
}
int main()
{    
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    cout<<diff(n);
    return 0;
}