#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while ( t-- )
    {
        bool even = 0, odd = 0;
        bool palindromic = 1;
        string s; cin >> s;
        if ( s.size() % 2 == 0)
            even = 1;
        else odd = 1;
        for ( int i = 0; i <s.size()/2 ; i++)
        {
            if( s[i] != s[s.size()-1-i] )
            {
                palindromic = 0;
                break;
            }
        }
        if( palindromic && even )
            cout << "YES EVEN" << "\n";
        else if ( palindromic && odd )
            cout << "YES ODD" << "\n";
        else cout << "NO" << "\n";        
    }

    return 0;
}
