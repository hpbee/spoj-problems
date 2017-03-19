#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t,n,x,y,r,x1,y1,x2,y2,i,j;
  cin>>t;
  int arr[4];
  char obj;
  while (t--)
  {
	cin>>n;
	j=n-1;
	while (n--)
	{
		cin>>obj;
		if (obj=='p')
		{	cin>>x>>y;
			x1=x;
			x2=x;
			y1=y;
			y2=y;
		}
		else if(obj=='c') 
		{cin>>x>>y>>r;
			x1=x-r;
			x2=x+r;
			y1=y-r;
			y2=y+r;
		}
			
		else {cin>>x1>>y1>>x2>>y2;}
		if (n==j) 
		{
			arr[0]=x1;arr[1]=y1;arr[2]=x2;arr[3]=y2;
		}
		else
		{arr[0]=(x1<arr[0])?x1:arr[0];
		arr[1]=(y1<arr[1])?y1:arr[1];
		arr[2]=(x2>arr[2])?x2:arr[2];
		arr[3]=(y2>arr[3])?y2:arr[3];
		}
	}
	i=0;
	while (i<4) {cout<<arr[i]<<" "; i++;}
	cout<<endl;
  }
  return 0;
}
