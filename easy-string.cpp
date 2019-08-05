#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<satck>
#include<algorithm>
#include<cmath>
#include<deque>
#include<queue>

using namespace std;

void easy_string(string str)
{
	stack<char>st;
	int count=1;
	char x,flag;
	for(char ch:str)
	{
		if(st.empty())
		{
			st.push(ch);
			continue;
		}
		while(!st.empty())
		{
			x=st.top;
			flag=x;
			st.pop();
			if(ch==x || ch==x-32)
			{
				count++;
			}
			else
			{
				st.push()
			}
		}
	}
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str;
		std::cin>>str;
		easy_string(str);
	}
	return 0;
}
