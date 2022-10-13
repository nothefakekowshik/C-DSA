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
	// string s ="kowshik";
	// cout<<sizeof(s);
	// cout<<endl;
	// for(auto i : s)
	// {
	// 	cout<<isalpha(i)<<" ";
	// }
	// cout<<endl;
	// for(auto i :s)
	// {
	// 	cout<<(int)i<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<s.length();i++)
	// {
	// 	if((int)s[i] >= 97 and (int)s[i] <= 122 )
	// 	{
	// 		s[i] = (char) ((int)s[i]-32);
	// 	}
	// }
	// cout<<s;
	// cout<<endl;
	// s="i am a bad boy";
 //    s.erase(remove(s.begin(), s.end(), ' '), s.end());
 //    c(s);
 //    cout<<endl;
 //    rs(name);
 //    if(name.find('A')==string::npos)
 //    {
 //        c("not in string");
 //    }
 //    c(name.find('A'));
    string s="kowshik";
    cout<<s<<endl;
    cout<<s.substr(2,1);
    cout<<endl;
    cout<<s.substr(2);
	return 0;
}