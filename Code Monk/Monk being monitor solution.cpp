#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int a[1000000];
int main()
{
    int t; cin >> t;
    while( t-- )
    {
        for(int i =0; i<=1000000; i++)
            a[i] = 0;
        int n;  cin >> n;
        for(int i=1; i<=n; i++)
        {
            int x; cin >> x;
            a[x]++;
        }
        int max = -1, min = 9999999;
        int min_index, max_index;
        for(int i=1; i<=1000000; i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
                max_index=i;
            }
            if( a[i]<min && a[i]>0 )
            {
                min=a[i];
                min_index=i
            }
        }
        if( max-min>0 && max_index>min_index )
            cout << max-min << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
