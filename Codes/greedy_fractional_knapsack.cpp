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
class Item {
public:
	int profit;
	int weight;
	Item(int profit, int weight) : profit(profit), weight(weight) {

	}
};
bool cmp(Item i1, Item i2) {
	double r1 = (double) i1.profit / (double)i1.weight;
	double r2 = (double) i2.profit / (double)i2.weight;
	return r1 > r2;

}
int main()
{
	init();
	Item items[] = {
		{60,10},
		{100,20},
		{120,30}
	};
	for (auto it : items) {
        cout << it.profit << " " << it.weight;
        cout<<endl;
    }
    cout<<endl;
    sort(items,items+3,cmp);
	for (auto it : items) {
        cout << it.profit << " " << it.weight;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int W = 50;
    int N = sizeof(items) / sizeof(items[0]);
    double finalvalue = 0.0;
    for (int i = 0; i < N; i++) {
         
        // If adding Item won't overflow, 
        // add it completely
        if (items[i].weight <= W) {
            W -= items[i].weight;
            finalvalue += items[i].profit;
        }
 
        // If we can't add current Item, 
        // add fractional part of it
        else {
            finalvalue += items[i].profit * ((double)W / (double)items[i].weight);
            break;
        }
    }
    cout<<finalvalue;
    cout<<endl;
	return 0;
}


/*

Given the weights and profits of N items, in the form of {profit, weight} put these items in a knapsack of capacity W to get the maximum total profit in the knapsack. In Fractional Knapsack, we can break items for maximizing the total value of the knapsack.

Input: arr[] = {{60, 10}, {100, 20}, {120, 30}}, W = 50
Output: 240 
Explanation: By taking items of weight 10 and 20 kg and 2/3 fraction of 30 kg. 
Hence total price will be 60+100+(2/3)(120) = 240

Input:  arr[] = {{500, 30}}, W = 10
Output: 166.667

*/