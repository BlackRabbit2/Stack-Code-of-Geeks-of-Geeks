#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<algorithm>
#include<stack>
#include<deque>
#include<queue>
#include<cmath>

using namespace std;

void remove(long long int n)
{
	int x;
	stack<int>st;
	int rem;
	while(n>0)
	{
		if(!st.empty())
		{
			rem=n%10;
			if(st.top()!=rem)
			{
				st.push(rem);
			}
		}
		else
		{
			st.push(n%10);
		}
		n=n/10;
	}
	while(!st.empty())
	{
		std::cout<<st.top();
		st.pop();
	}
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
	    long long int n;
		std::cin>>n;
		remove(n);
		std::cout<<endl;
	}
	return 0;
}
