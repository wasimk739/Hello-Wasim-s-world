// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
using namespace std;

void max_of_four(int p,int q,int r,int s)
{

{
  if((p>q)&&(p>r)&&(p>s))
  {
    cout<<p;
  }
  else
    {
        if ((q>r) && (q>s))
        {
            cout<<q;
        }
        else
        {
            if (r>s)
            {
                cout<<r;
            }
            else
            {
                cout<<s;

            }
        }
    }
}
}
int main()
{
    max_of_four(3,4,6,5);
    return(0);
}