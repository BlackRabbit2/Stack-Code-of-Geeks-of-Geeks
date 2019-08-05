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

void remove(unsigned long long int n)
{
	int x;
	stack<unsigned long long int>st;
	int rem;
	while(n>1)
	{
		rem=n%10;
		if(rem!=st.top() && st.empty()==false)
		{
			st.push(rem);
			//n=n/10;
		}
		else if(st.empty())
		{
			st.push(rem);
			//n=n/10;
		}
		n=n/10;
	}
	while(!st.empty())
	{
		x=st.top();
		st.pop();
		std::cout<<x<<" ";
		
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned long long int n;
		std::cin>>n;
		remove(n);
		std::cout<<"\n";
	}
	return 0;
}
