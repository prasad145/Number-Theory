#include<bits/stdc++.h>
using namespace std;
//naive approach to find n^x of a number n
//time complexity O(n)
int main()
{
	int base,power;
	cin>>base>>power;

	int res=1;
	for(int i=1;i<=power;i++)
	{
		res*=base;
	}

	cout<<res<<endl;
	return 0;

}