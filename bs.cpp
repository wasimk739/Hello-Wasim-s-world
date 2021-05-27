#include<iostream>
using namespace std;

void bubblesort(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<(size-i-1); j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}



int main()
{
int size=0;
   cout<<"Enter the size of array::";
   cin>>size;
   int myarray[size];
   for(int i=0;i<size;i++){
       myarray[i]=rand()%100;  //Generate number between 0 to 99
       cout<<"\nElements of the array::"<<endl;
   }
   for(int i=0;i<size;i++){
       cout<<"Elements no "<<i+1<<"::"<<myarray[i]<<endl;
   }
{  
bubblesort(myarray, size);  // quick sort called
cout<<"After Sorting"<<endl;
for(int i=0;i<size;i++)
{
cout<<myarray[i]<<" ";
}

return 0;
}
}
