#include <iostream>

using namespace std;

int main()
{
	int n;
	int f[100000];
	int kind=0;
	int g[100000];
	int h[1000000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
		flag=0;
		for(int j=0;j<i;j++)
		{
			if(f[j]==f[i])
			{
				flag = 1;
			}
		}
		if(flag==0)
		{
			kind++;
		}
	}
	
	cout << set<<endl;
	return 0;
}