#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
#include<stack>
#include<algorithm>

using namespace std;
int longest_valid_parentheses(string str)
{
	int last=-1,maxlen=0;
	stack<char>st;
	int i;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		if(str[i]=='(')
		{
			st.push(i);
		}
		else
		{
			if(st.empty())
			{
				last=i;
			}
			else
			{
				st.pop();
				if(st.empty())
				{
					maxlen=max(maxlen,i-last);
				}
				else
				{
					maxlen=max(maxlen,i-st.top());
				}
			}
		}
	}
	return maxlen;
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		//long int n;
	   string str;
	   std::cin>>str;
	   std::cout<<longest_valid_parentheses(str)<<endl;
	}
	return 0;
}
