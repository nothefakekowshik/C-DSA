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
        ri(a);ri(b);ri(c);
        if(a==1)
        {
            cout<<a<<endl;
        }
        else
        {
            if(c==1)
            {
                int second = b - c;
                int first = a - 1 ;
                if(first==second)
                {
                    cout<<"3"<<endl;
                }
                else if(first < second)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
            }
            else
            {
                int first = a - 1;
                int second = abs(b-c)*2;   
                if(first==second)
                {
                    cout<<"3"<<endl;
                }
                else if(first < second)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                } 

            }
            
            
        }

    }
    return 0;
}
