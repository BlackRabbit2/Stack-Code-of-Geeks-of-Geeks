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

void push(struct node** head_ref,int new_data)
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=new_data;
	newNode->next=(*head_ref);
	(*head_ref)=newNode;
}

/*
int findLen(struct node* head)
{
	int count=0;
	while(head)
	{
		count++;
		head=head->next;
	}
	return count;
}

void findKthNodeFromEnd(struct node* head,int k) // First Approach.......
{
	int len=findLen(head);
	count=0;
	while(head)
	{
		count++;
		if(count==len-k+1)
		{
			printf("%d ",head->data);
			break;
		}
		else
		{
			head=head->next;
		}
	}
}
*/
/*
void findKthNodeFromEnd(struct node* head,int k)   // Second Approach.....
{
	struct node *p=head;
	struct node *q=head;
	int count=0;
	while((count+1)<k && q)
	{
		count++;
		q=q->next;
	}
	
	while(q->next)
	{
		q=q->next;
		p=p->next;	
	}
	printf("%d ",p->data);
	return;
}
*/


void findKthNodeFromEnd(struct node* head,int k)  
{
	stack<int>st;
	struct node* current=head;
	while(current)
	{
		st.push(current->data);
		current=current->next;
	}
	int count=0;
	while(!st.empty() && count!=k)
	{
		int x=st.top();
		st.pop();
		count++;
		if(count==k)
		{
			std::cout<<x;
		}
	}
	return;
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
		scanf("%d",&k);
		findKthNodeFromEnd(head,k);
		std::cout<<endl;
	}
	return 0;
}
