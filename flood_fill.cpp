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

void helper(vector<vector<int>> &image, int sr, int sc, int color)
{

	queue<pair<int,int>> q;
	q.push({sr,sc});
	int start_color=image[sr][sc];
	image[sr][sc]=color;
	vector<int> dx = {0,0,1,-1};
	vector<int> dy = {1,-1,0,0};
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		int curr_x;
		int curr_y;
		q.pop();
		for(int i=0;i<4;i++)
		{
			curr_x=x+dx[i];
			curr_y=y+dy[i];
			if(image[curr_x][curr_y]==start_color and curr_x >= 0 and curr_x < image.size() and curr_y >= 0 and curr_y < image[0].size())
			{
				image[curr_x][curr_y]=color;
				q.push({curr_x,curr_y});
			}
		}
	}
	for(auto i : image)
	{
		for(auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	init_code();
	ri(m);
	ri(n);
	vector<vector<int>> image(m,vector<int >(n));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			image[i][j]=x;
		}
	}
	ri(sr);ri(sc);ri(color);
	helper(image,sr,sc,color);
	return 0;
}