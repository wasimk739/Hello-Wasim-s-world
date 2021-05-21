#include <iostream>
using namespace std;
void printPair(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i]+arr[j]==70)
            {
                cout << "(" << arr[i] << ", "
                 << arr[j] << ")"
                 << ", ";
            }
            else if(((arr[i]+arr[j])<70))
            {
                 cout << "(" << arr[i] << ", "
                 << arr[j] <<','<< (arr[i]+arr[j])-70 << ")"
                 << ", ";
            }
        }
    }
}
int main()
{
    int arr[] = { 25, 45, 60, 10, 13, 57 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printPair(arr, n);
    return 0;
}