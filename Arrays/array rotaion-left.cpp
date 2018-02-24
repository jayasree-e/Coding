#include <iostream>
using namespace std;
void leftRotateArray(int a[],int n,int d)
{
	for(int j=0;j<d;j++)
	{
	int temp=a[0];
	int i;
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[i]=temp;
	}
}
int main() {
	int n,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>d;
	leftRotateArray(a,n,d);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}