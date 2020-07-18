#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
//finding square of a number in O(logn) time
signed main()
{
	int base,power;
	cin>>base>>power;

	int res=1;
	while(power>0)
	{
		if(power%2==0)
		{
			base*=base;
			power/=2;
		}
		else
		{
			res=res*base;
			power--;
		}
	}

	cout<<res<<endl;
	return 0;
}