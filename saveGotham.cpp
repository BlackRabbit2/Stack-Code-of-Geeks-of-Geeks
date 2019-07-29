#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<stack>
#include<algorithm>
#include<queue>
#include<cmath>
#include<deque>
#define mod 1000000001

using namespace std;

void saveGotham(int arr[],int n)
{
	long long int sum=0;
	stack<long long int>st;
	int i;
	for(i=0;i<n;i++)
	{
		if(st.empty())
		{
			st.push(arr[i]);
			continue;
		}
		if(arr[i]>st.top())
		{
			while(!st.empty() && arr[i]>st.top())
			{
				sum=(sum%mod+arr[i]%mod)%mod;
				st.pop();
			}
			st.push(arr[i]);
		}
		else
		{
			st.push(arr[i]);
		}
	}
	std::cout<<sum<<endl;
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int height[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>height[i];
		}
		saveGotham(height,n);
	}
	return 0;
}
