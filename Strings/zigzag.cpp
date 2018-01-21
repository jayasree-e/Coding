#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	bool f=true;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n-2;i++)
	{
		if(f)
		{
			if(a[i]>a[i+1])
			swap(a[i],a[i+1]);
		}
			else
			{
			if(a[i]<a[i+1])
			swap(a[i],a[i+1]);
			}
			f=!f;
		
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}