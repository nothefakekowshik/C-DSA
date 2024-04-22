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
int main()
{
	init();
	ri(a);
	ri(b);
	int ans = 0;
	while(a <= b) {
		a *= 3;
		b *= 2;
		ans += 1;
	}
	cout<<ans;
	return 0;
}

/*

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

Examples
inputCopy
4 7
outputCopy
2
inputCopy
4 9
outputCopy
3
inputCopy
1 1
outputCopy
1
Note
In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are 4·3 = 12 and 7·2 = 14 respectively (one weight is tripled while the other one is doubled). Limak isn't larger than Bob yet. After the second year weights are 36 and 28, so the first weight is greater than the second one. Limak became larger than Bob after two years so you should print 2.

In the second sample, Limak's and Bob's weights in next years are: 12 and 18, then 36 and 36, and finally 108 and 72 (after three years). The answer is 3. Remember that Limak wants to be larger than Bob and he won't be satisfied with equal weights.

In the third sample, Limak becomes larger than Bob after the first year. Their weights will be 3 and 2 then.

*/