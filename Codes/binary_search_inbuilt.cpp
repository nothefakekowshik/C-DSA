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
	vector<int> ve{ 10, 20, 30, 40, 50 }; 
	int a[]={10,20,30,40,50};
	cout<<binary_search(all(ve),2);
	cout<<endl;
	cout<<binary_search(a,a+5,2);
	cout<<endl;


	
	cout<<endl;

	cout<<*lower_bound(ve.begin(),ve.end(),30);
	cout<<endl;
	cout<<*lower_bound(a,a+5,30);
	cout<<endl;
	cout<<*upper_bound(ve.begin(),ve.end(),30);
	cout<<endl;
	cout<<*upper_bound(a,a+5,30);	
	cout<<endl;


	cout<<endl;
	cout<<lower_bound(ve.begin(),ve.end(),30)-ve.begin();
	cout<<endl;
	cout<<*lower_bound(a,a+5,30)-a[0];
	cout<<endl;
	cout<<upper_bound(ve.begin(),ve.end(),30)-ve.begin();
	cout<<endl;
	cout<<*upper_bound(a,a+5,30)-a[0];	
	cout<<endl;

	return 0;
}  