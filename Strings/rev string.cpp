#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isAlpha(char x)
{
	return ((x>='a' && x<='z') || (x>='A' && x<='Z'));
}
void reversestring(char str[],int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		if(!isAlpha(str[l]))
		l++;
		else if(!isAlpha(str[r]))
		r--;
		else
		{
		swap(str[l],str[r]);
		l++;
		r--;
		}
	}
}
int main() {
	// your code goes here
	char str[]="abcd@efgh$";
	int n=strlen(str);
	cout<<"input   "<<str<<endl;
	reversestring(str,n);
	cout<<"öutput  "<<str;
	return 0;
}