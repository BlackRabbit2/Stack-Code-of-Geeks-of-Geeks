#include<iostream>
#include<stack>
#include<deque>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void mcm(int *arr,int n)
{
	int i,l,q;
	int m[n][n];
	for(i=1;i<=n;i++)
	{
		m[i][i]=0;
	}
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=n-l+1)
		{
			j=i+l-1;
			m[i][j]=INT_MAX;
			if(j-i==1)
			{
				q=m[i][i]+m[j][j]+arr[i-1]*arr[i]*arr[j];
				if(q<m[i][j])
				{
					m[i][j]=q;
				}
			}
			else
			{
				q=minimum((m[i][i]+m[i+1][j]+arr[i-1]*arr[i]*arr[j]),(m[i][i+1]+m[j][j]+arr[i-1]*arr[i+1]*arr[j]));
				if(q<m[i][j])
				{
					m[i][j]=q;
				}
			}
		}
	}
	//final printed value of above problem
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<m[i][j]<<" ";
		}
		std::cout<<endl;
	}
	return;
}

int main()
{
	int t;
	std::cin>.t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		mcm(arr,n);
	}
	return 0;
}
