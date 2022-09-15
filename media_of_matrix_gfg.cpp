
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

const int size=5;

int matMed(int mat[3][5], int r ,int c)
{
	int min = mat[0][0], max = mat[0][c-1];
	for (int i=1; i<r; i++)
	{
		if (mat[i][0] < min)
			min = mat[i][0];

		if (mat[i][c-1] > max)
			max = mat[i][c-1];
	}

	int medPos = (r * c + 1) / 2;
	while (min < max)
	{
		int mid = (min + max) / 2;
		int midPos = 0;

		for (int i = 0; i < r; ++i)
		{
			cout<<upper_bound(mat[i], mat[i]+c, mid) - mat[i]<<" ";
			midPos += upper_bound(mat[i], mat[i]+c, mid) - mat[i];
		}

		cout<<endl;
		if (midPos < medPos)
			min = mid + 1;
		else
			max = mid;
	}
	return min;
}

int main()
{
	init_code();
	int r = 3, c = 5;
	int m[3][5]= { {5,10,20,30,40}, {1,2,3,4,6}, {11,13,15,17,19} };
	for(auto& i : m)
	{
		for(auto& j :i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout << "Median is \n" << matMed(m, r, c) << endl;
	return 0;
}
