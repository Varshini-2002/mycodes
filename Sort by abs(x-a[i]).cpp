/*Given "n","n" elements and x. find abs(x-a[i]) for every a[i] in arrey "a". and sort the array based on the abs values.
ex: input: 5                         input: 5
           1 2 3 4 5                        1 2 3 4 5
           5                                3   
    output: 5 4 3 2 1                output: 3 2 4 1 5 */
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool cmp(pair<int,int>&a,pair<int,int>&b)
 {
     return a.second<b.second;
 }
int main() {
	// your code goes here
	int n,i,x;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	   cin>>a[i];
	cin>>x;
	map<int,int> m;
	for(i=0;i<n;i++)
	  m[a[i]]=abs(x-a[i]);
	vector<pair<int,int>> v;
	for(auto k:m)
	 v.push_back(k);
	sort(v.begin(),v.end(),cmp);
	for(auto k:v)
	 cout<<k.first<<" ";
		return 0;
}
    
