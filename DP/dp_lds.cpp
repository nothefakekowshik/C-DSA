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
int main()
{
	init_code();
	vector<int> a={1, 11, 2, 10, 4, 5, 2, 1};
	a={1,2,5,3,2};
	int n=a.size();
	vi ldsdp(n,1);
	vi lisdp(n,1);
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i] > a[j])
			{
				if(lisdp[i] < lisdp[j] + 1)
				{
					lisdp[i]=lisdp[j]+1;
				}
			}
		}
	}
	reverse(all(a));
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i] > a[j])
			{
				if(ldsdp[i] < ldsdp[j] + 1)
				{
					ldsdp[i]=ldsdp[j]+1;
				}
			}
		}
	}
	reverse(all(ldsdp));
	pve(a);
	cout<<endl;
	pve(lisdp);
	cout<<endl;
	pve(ldsdp);
	cout<<endl;
	return 0;
}


/*

a -> 1, 11, 2, 10, 4, 5, 2, 1

some of the LBS are
1 2 10 4 2 1
1 2 10 5 2 1
1 11 10 4 2 1
1 11 10 5 2 1


lis + lds wont work 
what is the solution then?
lis from starting point  + lis from ending point

in 1 11 2 10 4 5 2 1 
lis -> 1 2 2 3 3 4 2 1 -> (eq1)

what is the lis from starting point? 
one of the liss 1 2 10

what will be the lis from ending point?
one of the reverse liss is 1 2 4 10

reverse the array

1 2 5 4 10 2 11 1 

reverse lis -> 1 2 3 3 4 2 5 1

reverse of reverlis -> 1 5 2 4 3 3 2 1 -> (eq2)

1 2 2 3 3 4 2 1 		is the eq1
1 5 2 4 3 3 2 1 		is the eq1

max(lisdp[i] + ldsdp[i] - 1) will be the answer


*/