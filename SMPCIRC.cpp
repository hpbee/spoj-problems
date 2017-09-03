#include <iostream>
using namespace std;
#include<cmath>
int main()
{
	unsigned int t,r1,r2,x1,x2,y1,y2;
	int d,r;
	cin>>t;
	while (t--)
	{
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		d=sqrt(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
		r=abs(r2-r1);
		if (d<r) cout<<"I"<<endl;
		else if (d==r) cout<<"E"<<endl;
		else cout<<"O"<<endl;
	}
	return 0;
}