#include<bits/stdc++.h>
using namespace std;
int is_prime[1000001];
void sieve()
{
	int MAX=1000000;
	for(int i=0;i<MAX;i++)
	{
		is_prime[i]=1;
	}
	is_prime[0]=is_prime[1]=0;
	for(int i=2;i*i<=MAX;i++)
	{
		if(is_prime[i])
		{
			for(int j=i*i;j<=MAX;j+=i)
			{
				is_prime[j]=0;
			}
		}
	}
}
int main()
{
	sieve();
	int l,r;
	cin>>l>>r;
	while(l<=r)
	{
		if(is_prime[l])
		{
			cout<<l<<" ";
		}
		l++;
	}
}