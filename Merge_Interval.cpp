#include<iostream>
#include<set>
#include<map>
#include<bits/stdc++.h>
#include<deque>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;
struct Interval
{
	int start,end;
};

bool compareInterval(Interval i1,Interval i2)
{
	return(i1.start<i2.start);
}

void merge_interval(Interval arr[],int n)
{
	if(n<=0)
	{
		return;
	}
	stack<Interval> st;
	sort(arr,arr+n,compareInterval);
	st.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		Interval top=st.top();
		if(top.end<arr[i].start)
		{
			st.push(arr[i]);
		}
		else if(top.end < arr[i].end)
		{
			top.end=arr[i].end;
			st.pop();
			st.push(top);
		}
	}
	//Now I am going to print Merge Interval
	while(st.empty()==false)
	{
		Interval t=st.top();
		std::cout<<"{"<<t.start<<","<<t.end<<"}"<<" ";
		st.pop();
	}
	return;
}

int main()
{
	Interval arr[]={{6,8},{1,9},{2,4},{4,7}};
	int n=sizeof(arr)/sizeof(arr[0]);
	merge_interval(arr,n);
	return 0;
}
