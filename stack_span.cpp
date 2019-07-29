#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<math.h>
#include<cstdlib>

using namespace std;

void printArray(int *span,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		std::cout<<span[i]<<" ";
	}
	return;
}

void stack_span(int *arr,int n,int *span)
{
	stack<int> st;
	st.push(0);
	span[0]=1;
	for(int i=1;i<n;i++)
	{
		while(!st.empty() && arr[st.top()]<=arr[i])
		{
			st.pop();
		}
		span[i]=(st.empty())?(i+1):(i-st.top());
		st.push(i);
	}
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int arr[n],span[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		stack_span(arr,n,span);
		printArray(span,n);
		std::cout<<"\n";
	}
	return 0;
}
