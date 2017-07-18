#include <iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	long long int a, product=1;
	
	for(int i=0; i<n; i++)
	{
		cin>>a;
		product*=a;
		product %=1000000007;
	}
	cout<<product%1000000007;
  return 0;
}
