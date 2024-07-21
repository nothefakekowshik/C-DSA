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
bool helperChecker(string str) {
	string opening = "({[";
	stack<char> st;
	for(char i : str) {
		if(opening.find(i) != string::npos) {
			st.push(i);
		}
		else {
			if(i==')' && st.top() == '(') {
				st.pop();
			}
			else if(i==']' && st.top() == '[') {
				st.pop();
			}
			else if(i=='}' && st.top() == '{') {
				st.pop();
			}
		}
	}
	return st.empty() ? true : false;
}
int main()
{
	init();
	vector<string> string_list = { 
		"{[]}",
		"{{}}[]",
		"{([])}",
		"[}"};
	for(auto i : string_list) {
		cout<<"string " <<	i << helperChecker(i);
		cout<<endl;
	}
	return 0;
}
