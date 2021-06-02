// Write a program in C++ to display various type or arithmetic operation using mixed data type.

#include<iostream>
using namespace std;
int main()
{
    int m1=5, m2=7;
    double d1=3.7, d2=8.0; 
    cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;  
   cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
   cout <<" "<< m1 << " + " << d2 << " = " << m1+d2 << endl;  
 
   cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;  
   cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
   cout <<" "<< m1 << " - " << d2 << " = " << m1-d2 << endl;  
 
   cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl; 
   cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
   cout <<" "<< m1 << " * " << d2 << " = " << m1*d2 << endl;  
 
   cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;  
   cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
   cout <<" "<< m1 << " / " << d2 << " = " << m1/d2 << endl;  
    return 0;
}