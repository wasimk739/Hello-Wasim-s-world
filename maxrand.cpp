#include<iostream>
using namespace std;

int findMaximum(int randArray[], int sz)
{
    int max=randArray[0];
    for(int i=0; i<sz; i++)
    {
        if(max<randArray[i])
        {
            max=randArray[i];
        }
    }
    return max;
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
    result=findMaximum(randArray,sz);
    cout<<"maximum value in array is :"<<result<<endl;
      }
   return 0;
}