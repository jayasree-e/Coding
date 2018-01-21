#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,sum,c=0;
	cin>>n>>sum;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]<sum)
				{
					c++;
				}
			}
		}
	}
	cout<<c;
	return 0;
}