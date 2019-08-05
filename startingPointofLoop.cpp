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

bool detectAndremoveLoop(struct Node* head)
{
	int flag=0;
	struct Node* slow_ptr;
	struct Node* fast_ptr;
	struct Node* prev;
	slow_ptr=head;
	fast_ptr=head;
	while(slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr)
		{
			prev=slow_ptr;
			//flag=1;
			break;
		}
	}
	slow_ptr=head;
	while(slow_ptr && fast_ptr)
	{
		if(slow_ptr==fast_ptr)
		{
			flag=1;
			prev->next=NULL;//breaking loop...
			break;
		}
		else
		{
			prev=fast_ptr;
			fast_ptr=fast_ptr->next;
			slow_ptr=slow_ptr->next;
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

int main()
{ 
	Node* head = newNode(50); 
	head->next = newNode(20); 
	head->next->next = newNode(15); 
	head->next->next->next = newNode(4); 
	head->next->next->next->next = newNode(10); 
	head->next->next->next->next->next = head->next->next; 

	int res = detectAndRemoveLoop(head);   //Try to modified little bit here.... 
	if (res) 
		cout << "Yes"; 
	else
		cout << "No"<<endl;

	return 0; 
} 
