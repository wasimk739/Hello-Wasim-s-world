#include <iostream>
#include <cstdlib>
using namespace std;

void update(int *a,int *b) 
{
    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y); 
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<*pa<<endl<<*pb<<endl;

    return 0;
}