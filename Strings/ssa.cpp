#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int minlen=n+1;
	for(int s=0;s<n;s++)
	{
		int currsum=a[s];
		if(currsum>x)
		return 1;
		for(int e=s+1;e<n;e++)
		{
			currsum=currsum+a[e];
			if(currsum>x && (e-s+1)<minlen)
			minlen=e-s+1;
		}
		
	}
	cout<<minlen;
	return 0;
}