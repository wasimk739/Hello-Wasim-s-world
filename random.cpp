#include<iostream>
using namespace std;

int findMinimum(int array[], int size)
{
    int min=array[0];
    for(int i=0; i<size; i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    return min;
}
int main(){
    int size=0;
    cout<<"enter size of array = ";
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    int result=0;
    result=findMinimum(array,size);
    cout<<"minimum value in array is :"<<result<<endl;
    return 0;
}