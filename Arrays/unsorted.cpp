#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int x;
	cin>>x;
	int a[n],b[m];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i];
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	for(int j=0;j<m;j++)
	{
		if(s.find(x-b[j])!=s.end())
		{
			cout<<x-b[j]<<" "<<b[j]<<endl;
		}
	}
	return 0;
}