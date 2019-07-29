#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>
using namespace std;

int Parenthesis_Checker(string str)
{
	stack<char>st;
	int i;
	char x;
	long long len=str.length();
	for(i=0;i<len;i++)
	{
		if(str[i]=='{' || str[i]=='[' || str[i]=='(')
		{
			st.push(str[i]);
			continue;
		}
		if(st.empty())
		{
			return false;
		}
		switch(str[i])
		{
			case ')':
			x=st.pop();
			if(x=='{' || x=='[')
			{
				return false;
			}
			break;
			
			case '}':
			x=st.pop();
			if(x=='(' || x=='[')
			{
				return false;
			}
			break;
			
			case ']':
			x=st.pop();
			if(x=='{' || x=='(')
			{
				return false;
			}
		}
		return(st.empty());
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str;
		std::cin>>str;
		if(Parenthesis_Checker(str))
		{
			std::cout<<"balanced"<<endl;
		}
		else
		{
			std::cout<<"not balanced"<<endl;
		}
	}
	return 0;
}

