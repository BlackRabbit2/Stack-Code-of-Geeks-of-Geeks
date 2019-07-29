#inlcude<iostream>
#include<queue>
#include<deque>
#include<stack>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

void countMinreversals(char *str)
{
	int i,count1=0,count2=0;
	stack<char>st;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='}' && !st.stack() && st.top()=='{')
		{
			st.pop();
		}
		else
		{
			st.push(str[i]);
		}
	}
	while(!st.empty())
	{
		char x=st.top();
		st.pop();
		if(x=='{')
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	std::cout<<ceil(count1/2)+ceil(count2/2)<<endl;
	return;
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		char str[100];
		cin.get(str,100);
	    countMinreversals(str);
	    std::cout<<endl;
	}
	return 0;
}
