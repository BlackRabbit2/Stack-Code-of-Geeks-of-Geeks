#include<iostream>
#include<queue>
#include<deque>
#include<stack>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int countMinreversals(string str)
{
	int i,count1=0,count2=0;
	stack<char>st;
	int len=str.length();
	if(len%2)
	{
		return -1;
	}
	for(i=0;i<len;i++)
	{
		if((str[i]=='}') && (!st.empty()) && (st.top()=='{'))
		{
			st.pop();
		}
		else
		{
			st.push(str[i]);
		}
	}
	int red_len=st.size();
	while(!st.empty() && st.top()=='{')
	{
		st.pop();
		count1++;
	}
	return(red_len/2+count1%2);
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str;
		std::cin>>str;
		//char str[100];
		//cin.get(str,100);
	    int res=countMinreversals(str);
	    std::cout<<res<<endl;
	}
	return 0;
}
