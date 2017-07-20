#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{   
    int n , k;
    cin >> n >> k;
    int a[2][10000];
    for ( int i = 0; i < n; i++)
        cin >> a[0][i];
    for ( int i = 0; i < n; i++)
        a[1][i]= a[0][i] %  k;    

    for ( int i = 0; i < n-1; i++)
        for ( int j = 0; j< n-i-1; j++ ) 
            if( a[1][j] > a[1][j+1] )
            {
                swap(a[1][j],a[1][j+1]);
                swap(a[0][j],a[0][j+1]);
            }
    for ( int i = 0; i < n; i++)
        cout << a[0][i] << " ";
    return 0;
}
