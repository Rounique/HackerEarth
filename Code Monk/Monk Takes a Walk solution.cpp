#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int a[1000005];
int main()
{
	int t; cin >> t;
	while ( t-- )
	{
		string s;
		cin >> s;
		int count = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if( s[i]=='a' || s[i]=='A' || s[i]=='e'|| s[i]=='E'|| s[i]=='i'
				|| s[i]=='I'|| s[i]=='o'|| s[i]=='O'|| s[i]=='u'|| s[i]=='U')
				count ++;
		}
		cout << count << "\n";
	}
	return 0;
}
