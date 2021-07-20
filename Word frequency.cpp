/* count the word frequency in a given string .assume no special characters.
ex: input-> it was the best of times it was the worst of times
output-> {best:1},{it:2},{of:2},{the:2},{times:2},{was:2},{worst:1}  */

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
	for(auto i:m)
	{
	    cout<<"{"<<i.first<<":"<<i.second<<"},";
	}
	return 0;
}
