/* given a long number. find the missing digits [0-9] and print them in descending order without repetitions
ex: input->2844412
output->976530
*/

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	string s,t;
	cin>>s;
	int i;
	for(i=9;i>=0;i--)
	{
	   t=to_string(i);
	    size_t found=s.find(t);
	    if(found==string::npos)
	     cout<<i;
	}
	return 0;
}
