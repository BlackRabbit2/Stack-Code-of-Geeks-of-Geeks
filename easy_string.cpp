#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<stack>
#include<algorithm>
#include<cmath>
#include<deque>
#include<queue>

using namespace std;

void easy_string(string str)
{
	stack<char>st;
	int i;
	for(i=0;i<st.size();i++)
	{
		if(st.empty())
		{
			st.push(str[i]);
		}
		else
		{
			if(tolower(str[i])==tolower(st.top()))
			{
				st.push(str[i]);
			}
			else
			{
				std::cout<<st.size()<<char(tolower(st.top()));
				while(!st.empty())
				{
					st.pop();
				}
				st.push(str[i]);
			}
		}
	}
    if(!st.empty())
	{
		std::cout<<st.size()<<char(tolower(st.top()));
		st.pop();
	}
	return;
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
		std::cout<<"\n";
	}
	return 0;
}
