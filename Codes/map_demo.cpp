#include<bits/stdc++.h>
using namespace std;
int main()
{
	map <int ,int > um;
	um[1]=1;
	um[2]=2;
	um[3]=3;
	for(auto i : um)
	{
		cout<<i.first<<"->"<<i.second<<" ";
		cout<<endl;
	}
}
