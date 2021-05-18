#include<iostream>
using namespace std;

int findMinimum(int randArray[], int sz)
{
    int min=randArray[0];
    for(int i=0; i<sz; i++)
    {
        if(min>randArray[i])
        {
            min=randArray[i];
        }
    }
    return min;
}
int main()
{
   int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray[sz];
   for(int i=0;i<sz;i++)
      randArray[i]=rand()%100;  //Generate number between 0 to 99
  
   cout<<"\nElements of the array::"<<endl;
  
   for(int i=0;i<sz;i++)
      cout<<"Elements no "<<i+1<<"::"<<randArray[i]<<endl;
      {
        int result=0;
    result=findMinimum(randArray,sz);
    cout<<"minimum value in array is :"<<result<<endl;
      }
   return 0;
}