#include<bits/stdc++.h>
using namespace std;
//check if given number is prime or not 
//time complexity O(sqrt(n))
bool is_prime(int n)
{
	if(n==1)
	{
		return false;
	}

	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	if(is_prime(n))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
