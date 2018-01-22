#include <iostream>
using namespace std;

int main() {
	// your code goes here

 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
 	cin>>a[i];
 }
   int res = 1; 
 
   
   for (int i = 0; i < n && a[i] <= res; i++)
       res = res + a[i];
 
   cout<<res;
	return 0;
}