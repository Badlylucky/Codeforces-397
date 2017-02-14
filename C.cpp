#include <iostream>

using namespace std;

int main()
{
	int k,a,b;
	int set=0;
	cin>>k>>a>>b;

	if(k>a && k>b)
	{
		cout<<-1<<endl;
		return 0;
	}

	set += (a/k);
	set += (b/k);
	cout << set<<endl;
	return 0;
}