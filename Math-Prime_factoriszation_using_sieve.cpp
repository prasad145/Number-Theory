#include<bits/stdc++.h>
using namespace std;
int is_prime[10000001];
//time complexity O(logn)
void sieve()
{
	int MAX=1000000;
	for(int i=1;i<=MAX;i++)
	{
		is_prime[i]=-1;
	}
	for(int i=2;i<=MAX;i++)
	{
		if(is_prime[i]==-1)
		{
			for(int j=i;j<=MAX;j+=i)
			{
				if(is_prime[j]==-1)
				{
					is_prime[j]=i;
				}
			}
		}
	}
}
int main()
{
	sieve();
}
