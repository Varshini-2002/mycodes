/*Given an array S of N steps.Initially rabbit is at 0 and  then it moves forward by S[0] and so on.Your task is to find the no of steps made my Rabbit 
inorder to reach the end of the array
Example 5
       1 2 3 0 5
      -1
As rabbit was unable to reach end of the array output is -1
N=5
1 2 3 4 5
Output: 3   */
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int n,i,c=0,f=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	  cin>>a[i];
	for(i=0;i<n;i++)
	 {   if((a[i]==0&&i!=n-1))
	     {  f=1;
	        break;
	     }
	     else{ 
	     if(i<n-1){
         i=i+a[i]-1;
	     c=c+1;}
	     }
	 }
	 (f==0)?cout<<c:cout<<"-1";
	return 0;
}
