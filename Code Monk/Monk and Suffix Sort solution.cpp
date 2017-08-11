#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n; cin >>n;
    string a[100000];
    for(int i=0; i<s.size(); i++)
    {
        string add="";
        for(int j=i; j<s.size(); j++)
            add+=s[j];
        a[i]=add;
    }
    sort(a,a+s.size());
    cout << a[n-1];
    return 0;
}
