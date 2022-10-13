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
int CeilIndex(std::vector<int>& v, int l, int r, int key)
{
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m] >= key)
            r = m;
        else
            l = m;
    }
 
    return r;
}
int main()
{
	init_code();
	vector<int> v= {4,2,1,4,3,4,5,8,15};
	int k=3;
	v={7,4,5,1,8,12,4,7};
	k=5;
	v={1,5};
	k=1;
	v={1,3,3,4};
	k=1;
	vector<int> tail(v.size(), 0);
    int length = 1; 
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) 
    {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length - 1])
        {
            tail[length++] = v[i];
        }
        else
        {
        	if(abs(tail[length-1] - v[i]) <= k)
        	{
        		tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];	
        	}
            
        }
      }
      pve(tail);
      cout<<endl;
      int cnt=1;
      for(int i=1;i<length;i++)
      {
      	if(tail[i] - tail[i-1] <= k)
      	{
      		cnt+=1;
      	}
      	else
      	{
      		break;
      	}
      }
      cout<<endl;
      cout<<cnt<<endl;
	return 0;
}