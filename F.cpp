#include <iostream>
#include <cmath>

using namespace std;

int a[100000];

int minimum(int left,int right)
{
	int lim=abs(a[right]-a[left]);
	for(int i=left;i<right-1;i++)
	{
		for(int j=i+1;j<right;j++)
		{
			if(lim>abs(a[i]-a[j]))
			{
				lim=abs(a[i]-a[j]);
			}
		}
	}
	return lim;
}

int main()
{
	int n;
	int m;
	int l[300000];
	int r[300000];
	int mini[100000][100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>l[i]>>r[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mini[i][j]=minimum(i,i+j+1);
		}
	}

	for(int i=0;i<m;i++)
	{
		cout<<mini[l[i]][r[i]-l[i]-1]<<endl;
	}
	return 0;

}