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
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

void append(struct Node** head_ref,struct Node** tail_ref,int new_data)
{
	struct Node* new_node=new Node(new_data);
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
	}
	else
	{
		(*tail_ref)->next=new_node;
	}
	*tail_ref=new_node;
}

/*
int intersectionPoint(struct Node* head1,struct Node* head2)       //Third Approach....
{
	int len1=0,len2=0,diff;
	struct Node* curr1=head1;
	struct Node* curr2=head2;
	while(curr1)
	{
		len1++;
		curr1=curr1->next;
	}
	//Find the lenght of the second link list..
	while(curr2)
	{
		len2++;
		curr2=curr2->next;
	}
	//diff=(l1>l2)?(l1-l2):(l2-l1);
	if(l1>l2)
	{
		diff=l1-l2;
		while(diff!=0)
		{
			diff--;
			curr1=curr1->next;
		}
		while(curr1 && curr12)
		{
			if(curr1==curr2)
			{
				return curr1->data;
			}
			else
			{
				curr1=curr1->next;
				curr2=curr2->next;
			}
		}
	}
	else if(l1<l2)
	{
		diff=l2-l1;
		while(diff--)
		{
			diff--;
			curr2=curr2->next;
		}
		while(curr1 && curr2)
		{
			if(curr1==curr2)
			{
				return curr1->data;
			}
			else
			{
				curr1=curr1->next;
				curr2=curr2->next;
			}
		}
	}
	return -1;
}*/

/*
int intersectionPoint(struct Node* head1,struct Node* head2)   //bruteForce Approach....
{
	int flag=0;
	struct Node* curr1=head1;
	struct Node* curr2=head2;
	while(curr1)
	{
		while(curr2)
		{
			if(curr1==curr2)
			{
				return curr1->data;
			}
			else
			{
				curr2=curr2->next;
			}
		}
		curr1=curr1->next;
	}
	return -1;
}
* 
* /

/*
int intersectionPoint(struct Node* head1,struct Node* head2)           // Hashing approach..
{
	HashSet<Node> hs=new HashSet<Node>();
	struct Node* curr1=head1;
	struct Node* curr2=head2;
	while(curr1)
	{
		hs.insert(curr1);
		curr1=curr1->next;
	}
	while(curr2)
	{
		if(hs.find(curr2)!=hs.end())
		{
			return curr2->data;
		}
		else
		{
			hs.insert(curr2);
		}
	}
	return -1;
}
*/
int main()
{
	int t,i,n1,n2,n3,l,k;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n1>>n2>>n3;
		struct Node* head1=NULL,*tail1=NULL;
		for(i=1;i<=n1;i++)
		{
			std::cin>>l;
			append(&head1,&tail,l);
		}
		struct Node* head2=NULL,*tail2=NULL;
		for(i=1;i<=n2;i++)
		{
			std::cin>>l;
			append(&head2,&tail2,l);
		}
		struct Node* head3=NULL,*tail3=NULL;
		for(i=1;i<=n3;i++)
		{
			std::cin>>l;
			append(&head3,&tail3,l);
		}
		if(tail1!=NULL)
		{
			tail1->next=hed3;
		}
		if(tail2!=NULL)
		{
			tail2->next=head3;
		}
		std::cout<<intersectionPoint(head1,head2)<<endl;
	}
	return 0;
}
