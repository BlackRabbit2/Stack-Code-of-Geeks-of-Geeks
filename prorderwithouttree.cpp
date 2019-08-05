#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>

using namespace std;

void preorder(int *arr,int n)
{
	bool found=false;
	stack<int>st;
	int i,j;
	for(i=0,j=1;j<n;j++,i++)
	{
		if(arr[i]>arr[j])
		{
			st.push(arr[i]);
		}
		else
		{
			while(!st.empty())
			{
				if(arr[j]>st.top())
				{
					st.pop();
					found=true;
				}
				else
				{
					break;
				}
			}
		}
		if(found)
		{
			std::cout<<arr[i]<<" ";
		}
	}
	return;
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		preorder(arr,n);
	}
	return 0;
}
