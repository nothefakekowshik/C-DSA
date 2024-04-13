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
#define pi(a,b) pair<int,int> pi 
using namespace std;
 
void init()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int convertToDecimal(string bin) {
	int power = 0;
	int ans = 0;
	for(int i=bin.size()-1;i>=0;i--) {
		int digit = bin[i] - '0';
		cout<<digit<<" "<<ans<<endl;
		ans += (digit * pow(2,power++));
	}
	return ans;
}
int main()
{
	init();
	ri(n);
	cout<<endl;
	for(int i=31;i>=0;i--) {
		cout<<((n>>i)&1);
	}
    cout<<endl;
	cout<<endl;
	cout<<"given value is "<<n;
	cout<<endl;
	string ans = "";
	while(n != 0) {
		if(n%2==0) {
			ans += '0';
		} else{
			ans += '1';
		}
		n/=2;
	}
	reverse(all(ans));
	c(ans);
	cout<<endl;
	int dec = convertToDecimal(ans);
	cout<<"dec is "<<dec<<endl;
	return 0;
}