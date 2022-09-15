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
	int mat[4][5] =
    {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
 	unordered_map<int,int> hm;
 	for(int i=0;i<5;i++)
 	{
 		hm[mat[0][i]]=1;
 	}
 	for(int i=1;i<4;i++)
 	{
 		for(int j=0;j<5;j++)
 		{
 			if(hm.find(mat[i][j])!=hm.end() and hm[mat[i][j]]==i)
 			{
 				mat[i][j]=i+1;
 			}
 		}
 		for(auto i : hm)
		{
			cout<<i.first<<" "<<i.second<<endl;
		}
		cout<<endl;
 	}
 	for(auto i : hm)
 	{
 		if(i.second==4)
 		{
 			cout<<i.first<<"->"<<i.second;	
 		}
 		cout<<endl;
 	}
	return 0;
}