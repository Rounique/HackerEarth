#include <iostream>
#include <algorithm>
using namespace std;
string a[100000];
int main()
{
    int n; cin >> n;
    for(int i=1; i<=n; i++)
    {
        string  x; cin >> x;
        a[i] = x;
        sort(a+1 ,a+i+1);
        int count = 0;
        for(int j=0; j<10000; j++)
        {
            if(a[j]==x)
                break;            
            if(a[j]!="")
                count ++;
        }
        cout << count << "\n";
    }
    return 0;
}
