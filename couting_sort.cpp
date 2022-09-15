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
	vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 10 };
	int max_val = *max_element(arr.begin(),arr.end());
	int min_val = *min_element(arr.begin(),arr.end());
	int range = max_val - min_val -1;
	vector<int> count(range);
	vector<int> output(arr.size());

	for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min_val]++;


      for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

       for (int i = arr.size() - 1; i >= 0; i--) 
       {
	        output[count[arr[i] - min_val] - 1] = arr[i];
	        count[arr[i] - min_val]--;
       }

        for (int i = 0; i < arr.size(); i++)
        	arr[i] = output[i];
       pve(arr);

	return 0;
}