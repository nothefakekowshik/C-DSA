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
class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second > b.second) return true;
        return false;
    }
};
vector<string> topKFrequent(vector<string>& words, int k) {
    priority_queue<pair<int,string>, vector<pair<int,string>>, cmp> pq;
    unordered_map<string,int> mp;
    for(auto x: words)
        mp[x]++;
    for(auto x: mp)
    {
        pq.push({x.second,x.first});
    }
    vector<string> vec;
    while(k--)
    {
        vec.push_back(pq.top().second);
        pq.pop();
    }
    return vec;
}

int main()
{
	init();
	vector<string> words = {"i","love","leetcode","i","love","coding"};
	int k = 2;
	vector<string> words1 = topKFrequent(words, k);
	for(auto it : words1) {
		cout<<it<<" ";
	} 
	cout<<endl;
	return 0;
}
