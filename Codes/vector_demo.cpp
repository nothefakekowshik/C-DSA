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
	vector<int> ve = {2,4,3,1};
	vector<int> another = {1,2,3};
	vs names={"amazon","apple","facebook","google","leetcode"};\

	/* ------------------------------*/
	cout<<ve.size()<<" "<<endl;
	ve.erase(ve.begin()+2);
	
	cout<<ve.size()<<" "<<endl;
	// sort(ve.begin(),ve.end());
	// pve(ve);
	// cout<<endl;
	// cout<<is_sorted(ve.begin(),ve.end());
	// cout<<endl;
	// sort(ve.rbegin(),ve.rend());
	// pve(ve);
	// cout<<endl;
	// ve.insert(ve.end(),another.begin(),another.end());
	// pve(ve);
	// cout<<endl;
	// cout<<count(another.begin(),another.end(),2);
	// cout<<endl;
	// cout<<count(names[0].begin(),names[0].end(),'a');
	// cout<<endl;
	// cout<<endl;
	// reverse(ve.begin(),ve.end());
	// pve(ve);
	// cout<<endl;
	// cout<<endl;
	// vector<int> :: iterator it =ve.end()-1;
	// while(it >= ve.begin())
	// {
	// 	cout<<*it<<" " ;
	// 	it-=1;
	// }
	// cout<<endl;
	// auto itt =ve.end()-1;
	// while(itt >= ve.begin())
	// {    
	// 	cout<<*itt<<" ";
	// 	itt-=1;
	// }
	// cout<<endl;
	// cout<<endl;
	// cout<<*max_element(ve.begin(),ve.end());
	


	return 0;
}