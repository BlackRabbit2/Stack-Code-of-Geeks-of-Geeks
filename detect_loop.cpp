#include<iostream>
#include<stack>
#include<set>
#include<map>
#include<bits/stdc++.h>
#include<algorithm>
#include<deque>
#include<queue>

using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

void append(struct Node** head_ref,int new_data)
{
	struct Node* new_node=new Node(new_data);
	if(!(*head_ref))
	{
		*head_ref=new_node;
	}
	else
	{
		new_node->next=(*head_ref);
		(*head_ref)=new_node;
	}
}

/*
bool detectLoop(struct Node* head)       //Implementation of Floyd’s Cycle-Finding Algorithm.....
{
	struct Node* slow_ptr=head;
	struct Node* fast_ptr=head;
	while(slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/

/*
bool detectLoop(struct Node* head)          //hash Approach....
{
	unordered _set<Node*>hs;
	//HashSet<Node> hs=new HashSet<Node>();
	struct Node* current=head;
	while(current)
	{
		if(hs.find(current)!=hs.end())
		{
			return true;
		}
		else
		{
			hs.insert(current);
			current=current->next;
		}
	}
	return false;
}
*/

int main()Implementation of Floyd’s Cycle-Finding Algorithm:
{
	struct Node* head=NULL;
	int test,n,m,i;
	std::cin>>test;
	while(test--)
	{
		std::cin>>n;
		for(i=0;i<n;i++)
		{
			std::cin>>m;
			append(&head,m);
		}
		if(detectLoop(head))
		{
			std::cout<<"Yes"<<endl;
		}
		else
		{
			std::cout<<"No"<<endl;
		}
	}
	return 0;
}
