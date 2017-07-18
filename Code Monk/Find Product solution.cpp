#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; cin>>n;
    for (int i=2; i<=n; i++)
    {
        bool flag=0;
        
        for (int j=2 ;j<=sqrt(i); j++)
        {
            if(i % j == 0 && j!=i)
             {   
                 flag=true;
                 break;
             }
        }
        if(!flag)
            cout<<i<< " ";
    }
    return 0;
}
