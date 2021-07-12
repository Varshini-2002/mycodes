#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	// your code goes here
	string s;
	getline(cin,s);
	int i,min=0;
	map<char,int> m;
	for(i=0;i<s.length();i++)
	 m['s[i]']=m[s[i]]++;
	for(i=0;i<s.length();i++)
	{
	    if(m[s[i]]<m[s[min]]){
	    min=i;}
	}
cout<<s[min];
	return 0;
}
