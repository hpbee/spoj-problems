#include <iostream>
using namespace std;
int main()
{
	unsigned int t,n,x,y,i;
	cin>>t;
	while (t--)
	{
		cin>>n>>x>>y;
		for (i=x;i<n;i+=x)
		{
			if (i%y!=0) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}