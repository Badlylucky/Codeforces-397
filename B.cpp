#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[500];
	int n;
	cin >> s;
	n = strlen(s);
	int cnt=0;

	for(int i=0;i<n;i++)
	{
		//cerr << (char)('a'+cnt) <<" "<<s[i]<<endl;
		if(s[i]=='*')
		{
			continue;
		}
		if(s[i]==(char)('a'+cnt))
		{
			for(int j=0;j<n;j++)
			{
				if(s[j]==(char)('a'+cnt))
				{
					s[j]='*';
				}
			}
			cnt++;
			if(cnt>26)
			{
				//cerr<<"done2"<<endl;
				cout<<"NO"<<endl;
				return 0;
			}
		}else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout << "YES"<<endl;
	return 0;
}