/* given a string. reduce it in such a way that all of its substrings are distinct.To do so,you may delete any characters at any index.what is the min. no. of deletions needed?
ex: input-> abab
output->2
explanation: abab-{a,b,a,b,ab,ba,ab,aba,bab,abab}
by deleting one a,one b sring->ab->{a,b,ab} all are unique. so 2.   */

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	string s;
	cin>>s;
	set<char> se;
	for(int i=0;i<s.length();i++)
	  se.insert(s[i]);
	cout<<s.length()-se.size();
	return 0;
}
