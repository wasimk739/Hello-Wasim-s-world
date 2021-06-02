#include<iostream>
  using namespace std;

void insertionsort(int arr[], int size) {
  int key;
  int j = 0;
  for (int i = 1; i < 5; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
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
insertionsort(myarray, size);  // quick sort called
cout<<"After Sorting"<<endl;
for(int i=0;i<size;i++)
{
cout<<myarray[i]<<" ";
}

return 0;
}
}

