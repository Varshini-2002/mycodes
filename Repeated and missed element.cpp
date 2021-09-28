/* Given n value and an array of n unsorted  elements from 1 to n of which one of the element is repeated twice and one of the element is missing. find them.
input: 5   
       1 3 3 5 2
output:repeated element=3
       missing element=4   */
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int n,i,s1,s=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	 cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++)
	 {
	     if(a[i]==a[i+1]){
	      a[i]=0;
	      break;}
	 }
	  cout<<"repeated element="<<a[i+1]<<endl;
	  s1=(n*(n+1))/2;
	  for(i=0;i<n;i++)
	   s=s+a[i];
	  cout<<"missing element="<<s1-s;
	return 0;
}
