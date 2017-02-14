#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string airport[100][2];
	string home;
	string line[100];
	int town[100];
	int flag=0;
	int flag2=0;
	int pair=0;
	cin >> n;
	cin >> home;
	for(int i=0;i<n;i++)
	{
		cin >>line[i];
		town[i]=0;
		airport[i][0]=line[i].substr(0,3);
		airport[i][1]=line[i].substr(5,3);
	}

	/*for(int i=0;i<n;i++)
	{
		cerr << airport[i][0] << " " << airport[i][1]<<endl;
	}*/

	for(int i=0;i<n;i++)
	{
		if(town[i]==0 && airport[i][0]==home)
		{
			for(int j=0;j<n;j++)
			{
				if(town[j]==0 && airport[j][0]==airport[i][1] && airport[j][1]==home)
				{
					//cerr << "t" << endl;
					town[i]=1;
					town[j]=1;
					flag=1;
					pair++;
					break;
				}
			}
			if(flag==0)
			{
				town[i]=1;
				flag2=1;
			}
			flag=0;
		}
	}
	if(flag2==0)
	{
		cout<<"home"<<endl;
	}else{
		cout<<"contest"<<endl;
	}
	return 0;
}