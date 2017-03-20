#include <iostream>
using namespace std;
#include<string>
#include<vector>
int main()
{
	int t,n,i,k,dec,dec2,rem,rem2,a,b,d,l;
	unsigned int m;
	string s1,s2,ans,g;
	vector<int> v;
	cin>>t;
	while (t--)
	{
		v.clear();
		ans="";
		cin>>n;
		while (n--)
		{
			a=0;
			b=0;
			cin>>s1;
			d=1;
			for (int i=0;i<100;i++)
			{
				if (s1[i])
				{
					dec=s1[i];
					dec2=dec;
					k=i+1;
					while (k--)
					{
						rem=dec%2;
						dec=dec/2;
					}
					k=((i+3)%6)+1;
					while (k--)
					{
						rem2=dec2%2;
						dec2=dec2/2;
					}
					a=a+rem*d;
					b=b+rem2*d;
					d*=2;
				}
				else break;
			}
			v.push_back(a);
			v.push_back(b);
		}
		cin>>s2;
		for (m=0;m<v.size();m++)
		{
			l=v[m];
			g=s2.at(l);
			ans.append(g);
		}
		cout<<ans<<endl;
	}
	return 0;
}