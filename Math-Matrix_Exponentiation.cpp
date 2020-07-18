#include<bits/stdc++.h>
#define N 101
using namespace std;
//finding the power of matrix 
//naive approach
//time complexity: O((m^3)*n)

int mat[N][N],I[N][N];

void multi(int mat[][N],int I[][N],int n)
{
	int res[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			res[i][j]=0;
			for(int k=1;k<=n;k++)
			{
				res[i][j]+=(mat[i][k]*I[k][j]);
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
	//identitiy matrix
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

	for(int i=1;i<=m;i++)
	{
		multi(mat,I,n);
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) 
		{
			mat[i][j]=I[i][j];
		}
	}
}

void print_ans(int mat[][N],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<mat[i][j]<<" "; 
		}
		cout<<endl;
	}
	cout<<endl;
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
		print_ans(mat,n);
	}
	return 0;
}