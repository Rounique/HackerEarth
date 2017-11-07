#include <iostream>
using namespace std;
int a[100005];
int main()
{
    int n,x;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    int t; cin>>t;
    for(int i=0; i<n;i++)
    {
        if(a[i]==t)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
