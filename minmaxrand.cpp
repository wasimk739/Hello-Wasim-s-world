#include<iostream>
using namespace std;

int main()
{
   int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray[sz];
   for(int i=0;i<sz;i++)
      randArray[i]=rand()%100;  //Generate number between 0 to 99
  
   cout<<"\nElements of the array::"<<sz<<endl;
  
   for(int i=0;i<sz;i++)
      cout<<"Elements no "<<i+1<<"::"<<randArray[i]<<endl;
    int max=randArray[0];
    int min=randArray[0];
    for(int i=0; i<sz; i++)
    {
        if(max>randArray[i])
        {
            max=randArray[i];
        }
        if(min<randArray[i])
        {
            min=randArray[i];          
        }
    }
    cout<<"min value is: "<<min<<endl;
    cout<<"max value is: "<<max<<endl;
    return 0;
}