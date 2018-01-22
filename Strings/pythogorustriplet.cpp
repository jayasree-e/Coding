#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
int n,f=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
    for (int i=0; i<n; i++)
    {
       for (int j=i+1; j<n; j++)
       {
          for (int k=j+1; k<n; k++)
          {
            
            int x = a[i]*a[i], y = a[j]*a[j], z = a[k]*a[k];
 
            if (x == y + z || y == x + z || z == x + y){
                 cout<<"yes";
                 f=1;
                 break;}
          }
       }
    }
 if(!f)
    cout<<"no";
    

	return 0;
}