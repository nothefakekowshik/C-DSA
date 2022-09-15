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
	ri(t);
	while(t--)
	{
		string x;
		string y;
		cin>>x>>y;
		string ans="";
	    reverse(x.begin(),x.end());
	    reverse(y.begin(),y.end());
	    int i=0,j=0;
	    int carry=0;
	    while(i < x.size() and j < y.size())
	    {
	        int temp=x[i] - '0';
	        temp+=(y[j] - '0');
	        temp+=carry;
	        //cout<<temp<<endl;
	        int rem = temp % 10;
	        if(temp >= 10)
	        {
	            ans+=to_string(rem);
	        }
	        else
	        {
	            ans+=to_string(rem);
	        }
	        carry = temp / 10;
	        i+=1;
	        j+=1;
	    }
	    while(i < x.size())
	    {
	        int temp=x[i] - '0';
	        temp+=carry;
	        int rem =temp % 10;
	        if(temp >= 10)
	        {
	            ans+=to_string(rem);
	        }
	        else
	        {
	            ans+=to_string(rem);
	        }
	        carry = temp / 10;
	        i+=1;
	    }
	    while(j < y.size())
	    {
	        int temp=y[j] - '0';
	        temp+=carry;
	        int rem = temp % 10;
	        if(temp >= 10)
	        {
	            ans+=to_string(rem);
	            
	        }
	        else
	        {
	            ans+=to_string(rem);
	        }
	        carry = temp / 10;
	        j+=1;
	    }
	    if(carry==1)
	    {
	        ans+="1";
	    }
	    reverse(ans.begin(),ans.end());
	    i=0;
	    while(i < ans.size() and ans[i]=='0')
	    {
	    	i+=1;
	    }
	    ans.erase(0,i);
	    if(ans.size()==0)
	    {
	    	ans="0";
	    }
	    cout<<ans<<endl;
	}
	return 0;
}