#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{   
    int n , k;
    cin >> n >> k;
    int a[10000];
    for ( int i = 0; i < n; i++)
        cin >> a[i];

    for ( int i = 0; i < n-1; i++)
        for ( int j = 0; j< n-i-1; j++ ) 
            if( a[j]%k > a[j+1]%k )
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    for ( int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
