#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f(a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define pve(v) for(auto i : v) cout<<i<<" ";
#define c(x) cout<<x<<" ";
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long>
#define ri(x) int x; cin>>x;
#define rs(x) string x; cin>>x;

using namespace std;
 
void init_code()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
class ListNode
{
	public :
	int data;
	ListNode* next;
	ListNode()
	{
		data=0;
		next=NULL;
	}
	ListNode(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
class LL
{
	ListNode* head;
public:
	LL()
	{
		head=NULL;
	}
	void append(int data)
	{
		ListNode* newnode=new ListNode(data);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			ListNode* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	void print()
	{
		ListNode* temp =head;
		while(temp!=NULL)
		{
			c(temp->data);
			temp=temp->next;
		}
	}
	void customprint(ListNode* newhead)
	{
		ListNode* temp =newhead;
		while(temp!=NULL)
		{
			c(temp->data);
			temp=temp->next;
		}
	}
	void reverse()
	{
		ListNode* curr=head;
		ListNode* prev=NULL;
		ListNode* next=NULL;
		while(curr!=NULL)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		head=prev;
	}
	void customreverse(ListNode* newhead)
	{
		ListNode* curr=newhead;
		ListNode* prev=NULL;
		ListNode* next=NULL;
		while(curr!=NULL)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		newhead=prev;
	}
	void reverseUsingStack()
	{
		vi s;
		ListNode* curr=head;
		while(curr)
		{
			s.pb(curr->data);
			curr=curr->next;
		}
		curr=head;
		while(curr)
		{
			curr->data=s[s.size()-1];
			s.pop_back();
			curr=curr->next;	
		}	
	}

	ListNode* getMid(LL o)
	{
		ListNode* slow =head;
		ListNode* prev=head;
		ListNode* fast=head;
		while(fast and fast->next)
		{
			prev=slow;
			slow=slow->next;
			fast=fast->next->next;
		}
		cout<<prev->data<<" @"<<endl;
		return slow;		
	}
	int getCount()
	{
		int cnt=0;
		ListNode* curr=head;
		while(curr)
		{
			curr=curr->next;
			cnt+=1;
		}
		return cnt;
	}
};
int main()
{
	init_code();
	LL o;
	o.append(4);
	o.append(33);
	o.append(3);
	o.append(4);

	o.print();
	cout<<endl;
	// o.reverse();
	// o.print();
	cout<<endl;
	//cout<<"total count is "<<o.getCount()<<endl;
	cout<<endl;
	ListNode* mid_node = o.getMid(o);

	cout<<"mid node data "<<mid_node->data;
	return 0;
}
