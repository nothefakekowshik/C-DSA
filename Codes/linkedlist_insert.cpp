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
class node
{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
class linkedlist
{
	node *head;
	public:
	linkedlist()
	{
		head=NULL;
	}	
	void insert(int x)
	{
		if(head==NULL)
		{
			head=new node(x);
			return;
		}
		else
		{
			node *temp=head;
			while(temp->next)
			{
				temp=temp->next;
			}
			temp->next=new node(x);
		}
	}
	void print()
	{
		cout<<"\nprinting.."<<endl;
		node *temp=head;
		while(temp)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
	void reverse()
	{
		node *prev=NULL;
		node *curr=head;
		node *temp=NULL;
		while(curr)		
		{
			temp=curr->next;
			curr->next=prev;
			prev=curr;
			curr=temp;
		}
		head=prev;
		cout<<"\nreversed.."<<endl;
	}
};
int main()
{
	init_code();
	linkedlist lobj;
	lobj.insert(1);
	lobj.insert(2);
	lobj.insert(3);
	lobj.print();
	lobj.reverse();
	lobj.print();
	return 0;
}

