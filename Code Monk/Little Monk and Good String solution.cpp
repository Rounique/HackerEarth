#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int Max_LGS = 0;
    int LGS = 0;
    for ( int i = 0; i < s.size() ; i++ )
    {
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
        s[i] == 'o' || s[i] == 'u' )
        {
            LGS = 0;
            while ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' )
            {
                LGS ++;
                i ++;
            }
            if( LGS > Max_LGS )
                Max_LGS = LGS ;
        }
    }
    cout << Max_LGS;
    return 0;
}
