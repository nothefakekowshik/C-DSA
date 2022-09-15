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
	vector<string> words1= { "amazon","apple","facebook","google","leetcode"};
	vector<string> words2= {"e","o"};
	vi ans;
	unordered_map<char,int> u2;
	for(auto i : words2)
    {
        u2[i]+=1;
    }
    for(auto i : u2)
    {
    	cout<<i.first<<"->"<<i.second;
    	cout<<endl;
    }

    
    for(auto i : words1)
    {
        bool flag= true;
        for(auto j : u2)
        {
            if(j.second != count(i[0].begin(),i[0].end(),j.first))
            {
                flag=false;
            }
        }
        if(flag)
        {
            ans.push_back(i);
        }
    }
	return 0;
}