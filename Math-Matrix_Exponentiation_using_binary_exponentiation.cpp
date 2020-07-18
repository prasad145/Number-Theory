#include<bits/stdc++.h>
#define N 101
using namespace std;
//time complexity : O(n^3*logM)
int mat[N][N],I[N][N];

void multi(int I[][N],int a[][N],int n)
{
	int res[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			res[i][j]=0;
			for(int k=1;k<=n;k++)
			{
				res[i][j]+=(I[i][k]*a[k][j]);
			}
		}
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			I[i][j]=res[i][j];
		}
	}
}

void power(int mat[][N],int n,int m)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)
				I[i][j]=1;
			else
				I[i][j]=0;
		}
	}

	while(m)
	{	
		if(m%2)
		{
			multi(I,mat,n),m--;
		}
		else
		{
			multi(mat,mat,n),m/=2;
		}
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			mat[i][j]=I[i][j];
		}
	}

}

void print_array(int mat[][N],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;

		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>mat[i][j];
			}
		}

		power(mat,n,m);
		print_array(mat,n);
	}
	return 0;
}