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
void merge(int a[],int low,int mid,int high)
{
	
	int left_size = mid-low+1;
	int right_size = high-mid;
	int left[left_size];
	int right[right_size];
	for(int i=0;i<left_size;i++)
	{
		left[i]=a[i+low];
	}
	for(int j=0;j<right_size;j++)
	{
		right[j]=a[mid+j+1];
	}
	int i=0;
	int j=0;
	int k=low;
	while(i < left_size and j < right_size)
	{
		if(left[i] < right[j])
		{
			a[k]=left[i];
			i+=1;
			k+=1;
		}
		else
		{
			a[k]=right[j];
			j+=1;
			k+=1;
		}
	}
	while(i < left_size)
	{
		a[k]=left[i];
		i+=1;
		k+=1;
	}
	while(j < right_size)
	{
		a[k]=right[j];
		j+=1;
		k+=1;
	}

}
void merger(int a[],int low,int high)
{
	if(low < high)
	{
		int mid = low +(high-low)/2;
		merger(a,low,mid);
		merger(a,mid+1,high);
		merge(a,low,mid,high);
	}
	else
	{
		return ;
	}
}
int main()
{
	init_code();
	int a[]= {12,11,13,5,91,6,7};
	int n= sizeof(a)/sizeof(a[0]);
	merger(a,0,n-1);
	pve(a);
	return 0;
}