#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
using namespace std;


struct node
{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int data)
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=(*head_ref);
	(*head_ref)=newNode;
}
/*
struct node* findMiddle(struct node* head)     // First Approach ....
{
	struct node *slow_ptr,*fast_ptr;
	slow_ptr=head;
	fast_ptr=head->next->next;
	while(fast_ptr->next || fast_ptr->next->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
	}
	return(slow_ptr->next);
}
*/

int count(struct node* head)
{
	struct node* current;
	current=head;
	int c=0;
	while(current)
	{
		c++;
		current=current->next;
	}
	return c;
}

struct node* findMiddle(struct node* head)
{
	int len=count(head);
	struct node* current=head;
	struct node* prev;
	int var1,var2=0;
	if(len%2)
	{
		var1=(len/2)+1;
		while(var2<var1 && current)
		{
			var2++;
			prev=current;
			current=current->next;
		}
	}
	else
	{
		var1=len/2;
		while(var2<var1 && current)
		{
			var1++;
			prev=current;
			current=current->next;
		}
	}
	return prev;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		struct node* head=NULL;
		int n,m,i,k;
		printf("Enter the number of the node\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			push(&head,m);
		}
		struct node* middle=findMiddle(head);
		std::cout<<middle->data<<endl;
	}
	return 0;
}
