#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	string s1,s2;
	cin>>s1>>s2;
	if(s1.length()==s2.length())
	{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(equal(s1.begin(),s1.end(),s2.begin()))
	cout<<"anagrams";
	}
	else
	cout<<"not anagrams";
	return 0;
}
