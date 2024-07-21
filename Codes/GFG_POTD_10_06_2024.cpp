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
void sortArray(char arr[], int n, const unordered_map<char, int>& um) {
    // Custom comparator using the unordered_map
    auto comparator = [&um](char a, char b) {
        return um.at(a) < um.at(b);
    };

    sort(arr, arr + n, comparator);
}

int main()
{
	init();
	unordered_map<char,int> um = {
		{'!',1},
		{'#',2},
		{'$',3},
		{'%',4},
		{'&',5},
		{'*',6},
		{'?',7},
		{'@',8},
		{'^',9}
	};


	unordered_map<char,int> um2 = {
		{'!',11},
		{'#',2},
		{'$',3},
		{'%',4},
		{'&',5},
		{'*',6},
		{'?',7},
		{'@',8},
		{'^',9}
	};

	ri(n);
	char nuts[n];
	char bolts[n];
	for (int i = 0; i < n; ++i) {
        cin >> nuts[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> bolts[i];
    }

    auto comparator = [&](char a, char b) {
        return um.at(a) < um.at(b);
    };
	// ikada & kakunda only um ani mention cheste you can only access um inside it, you cant access um2, '&' pedte mottam anni access cheskochu.	


    // auto comparator = [&um](char a, char b) {
    // 	cout<<"===";
    // 	cout<<um2['!'];
    // 	cout<<"===";
    // 	cout<<endl;
    //     return um.at(a) < um.at(b);    // THIS WILL THROW ERROR
    // };

    

    sort(bolts, bolts + n, comparator);
    sort(nuts, nuts + n, comparator);

	// sortArray(bolts, n, um);
	// sortArray(nuts, n, um);

	for (int i = 0; i < n; ++i) {
        cout << nuts[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << bolts[i] << " ";
    }
    cout << endl;
	return 0;
}

/*

https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

*/