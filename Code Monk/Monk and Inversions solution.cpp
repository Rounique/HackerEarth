#include <iostream>
using namespace std;

int main()
{
    int m[100][100];
    int t; cin>>t;
    while ( t-- )
    {
        int n; cin >> n;
        int inversions = 0;
        for (int i = 0; i < n; i++)
            for( int j = 0; j < n; j++)
                cin >> m[i][j];
        for ( int i = 0; i < n; i++)
            for ( int j = 0; j < n; j++)
                for ( int k = n-1; k>= i; k-- )
                    for ( int z = n-1; z>=j ;z--)
                        if ( m[i][j] > m[k][z])
                            inversions++;
        cout << inversions << "\n";
    }
    return 0;
}
