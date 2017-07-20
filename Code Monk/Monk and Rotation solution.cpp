#include <iostream>
using namespace std;

int main()
{
    int c; cin >> c;;
    while ( c-- )
    {
        int n, k ; cin >> n >> k;
        int a[n];
        for ( int i = 1; i <= n; i++)
            cin >> a[i];
            
        int shift = k % n;
        
        for ( int i = n-shift+1; i<= n; i++)   
            cout << a[i] << " ";
        for ( int i = 1; i<= n-shift; i++)   
            cout << a[i] << " ";  
        cout << "\n";
    }
    return 0;
}
