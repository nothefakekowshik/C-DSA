//https://practice.geeksforgeeks.org/batch/microsdaysoft-29/track/microsoft-29days-day6/problem/check-if-two-strings-are-k-anagrams-or-not

/*

Given two strings of lowercase alphabets and a value K, your task is to complete the given function which tells if  two strings are K-anagrams of each other or not.

Two strings are called K-anagrams if both of the below conditions are true.
1. Both have same number of characters.
2. Two strings can become anagram by changing at most K characters in a string.

Example:

Input:
str1 = "fodr", str2="gork"
k = 2
Output:
1
Explanation: Can change fd to gk

wurkbxkgkfmlzofn mczujslxzvhecrpy
10
expected : 1

qufefzniwrhar lzvnmuhlexhec
7


*/


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
bool anagramcheck(string str1,string str2,int k)
{
	if(str1.size()!=str2.size())
        {
            return 0;
        }
        unordered_map<char,int> um1;
        for(auto i : str1)
        {
            um1[i]+=1;
        }
        for(auto i : um1)
        {
        	cout<<i.first<<" "<<i.second<<" ";
        	cout<<endl;
        }
        cout<<endl;
        int count=0;
        for(auto i : str2)
        {
            if(um1.find(i)!=um1.end())
            {
                um1[i]-=1;
            }
        }
        for(auto i : um1)
        {
        	cout<<i.first<<" "<<i.second<<" ";
        	cout<<endl;
        }
        for(auto i : um1)
        {
            count+=abs(i.second);
        }
        if(count <= k)
        {
            return 1;
        }
        return 0;       
}
int main()
{
	init_code();
	rs(str1);
	rs(str2);
	ri(k);
	cout<<anagramcheck(str1,str2,k);
	return 0;
}