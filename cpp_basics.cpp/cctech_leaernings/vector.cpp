#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <double> f(5,20);
    for(int i=0; i<f.size(); i++)
    cout<<f[i]<<endl;
    return 0;
}