#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
using namespace std;

bool findDuplicateparenthesis(string str)
{
	int count;
	stack<char>st;
	for(char ch: str)
	{
		if(ch==')' && !st.empty())
		{
			count=0;
			while(st.top()!='(')
			{
				st.pop();
				count++;
			}
			st.pop();
		}
		st.push(ch);
		if(count<1)
		{
			return 1;
			break;
		}
	}
	return false;
}
	

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str;
		std::cin>>str;
		if(findDuplicateparenthesis(str))
		{
			std::cout<<"Duplicates Found"<<endl;
		}
		else
		{
			std::cout<<"Duplicates Not Found"<<endl;
		}
	}
	return 0;
}
