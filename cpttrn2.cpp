#include <iostream>
using namespace std;

int main()
{
	int t,l,c,i,j,k;
	cin>>t;
	for(k=0;k<t;k++)
	{
		cin>>l;
		cin>>c;
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=c;j++)
			{
				if(i==1||i==l||j==1||j==c) cout<<"*";
				else cout<<".";
				
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}