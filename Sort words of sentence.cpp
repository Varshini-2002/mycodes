/* input-> hello how are you
output-> are hello how you 
*/

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	string s,w;
	map<string,int> m;
	getline(cin,s);
	istringstream ss(s);
	while(ss>>w)
	{
	    m[w]++;
	}
	for(auto x:m)
	 cout<<x.first<<" ";
	return 0;
}
