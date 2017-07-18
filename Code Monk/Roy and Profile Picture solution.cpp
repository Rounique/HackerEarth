#include <iostream>
using namespace std;
int main()
{
	int l; cin>>l;
	int n; cin>>n;
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		
		if( a<l || b<l )
		cout<<"UPLOAD ANOTHER"<<"\n";	
			
		else if(a>=l && b>=l)
		{
			if(a==b)
			cout<<"ACCEPTED"<<"\n";
			else cout<<"CROP IT"<<"\n";						
		}
	}
  return 0;
}
