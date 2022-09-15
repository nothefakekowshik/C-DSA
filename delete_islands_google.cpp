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
void printer(vector<vector<int>> mat)
{
	for(int i=0;i<mat.size();i++)
	{
		for(int j=0;j<mat[0].size();j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	init_code();
	int m;
	int n;
	cin>>m>>n;
	vector<vector<int>> mat(m, vector<int>(n,0));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp;
			cin>>temp;
			mat[i][j]=temp;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(mat[0][i]==1)
		{
			mat[0][i]=2;
		}
		if(mat[m-1][i]==1)
		{
			mat[m-1][i]=2;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(mat[i][0]==1)
		{
			mat[i][0]=1;
		}
		if(mat[i][n-1]==1)
		{
			mat[i][n-1]=2;
		}	
	}

	// asalu inta bfs/dfs akkarled 
	//simpler version is :

	/*

 public static void DeleteIslands(int[][] matrix)
    {
        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0; j < matrix[0].Length; j++)
            {
                if (matrix[i][j] == 1 && !CheckIfEdge(matrix, i, j))
                {
                    matrix[i][j] = 2;
                }
            }
        }

        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0;j < matrix[0].Length; j++)
            {
                if (matrix[i][j] == 2)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    public static bool CheckIfEdge(int[][] matrix, int i, int j)
    {
        if (i <= 0 || i >= matrix.Length - 1 || j <= 0 || j >= matrix[0].Length - 1)
        {
            return true;
        }

        if (matrix[i-1][j] == 0 || matrix[i+1][j] == 0 || matrix[i][j - 1] == 0 || matrix[i][j + 1] == 0 || matrix[i - 1][j - 1] == 0 || matrix[i + 1][j + 1] == 0)
        {
            return true;
        }

        return false;
    }
}

	*/
	printer(mat);
	return 0;
}