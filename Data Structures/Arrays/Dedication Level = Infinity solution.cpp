#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    string s[10000], stemp;
    int a[10000], temp;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j+1]>a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                stemp=s[j+1];
                s[j+1]=s[j];
                s[j]=stemp;
            }
        }
    }
    cout<<s[0]<<"\n"<<s[1]<<"\n"<<s[2]<<"\n";
    
    return 0;
}
