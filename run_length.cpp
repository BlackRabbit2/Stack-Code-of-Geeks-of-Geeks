#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<queue>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

void run_length(string str)
{
	int count,p;
	int len=str.length();
	for(int i=0;i<len;i=i+p)
	{
		count=1,p=1;
		while(i<n-1 && (str[i]==str[i+1+p]))
		{
			count++;
			p++;
		}
		std::cout<<str[i]<<count<<" ";
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
		run_length(str);
	}
	return 0;
}
