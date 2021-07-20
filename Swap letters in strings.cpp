/* n test cases foloowed by n strings
input->4
I am a Computer Science Student
I am your Senior
I ma a oCpmture cSeicne tSdunet
I ma oyru eSinro
output->
I ma a oCpmture cSeicne tSdunet
I ma oyru eSinro
I am a Computer Science Student
I am your Senior   */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,i;
	string s;
	cin >> num;								
	getline(cin,s);
	while(num!=0)
	{
		getline(cin,s);
		i=0;
		while(i<s.length()&&(i+1)<s.length())
		{
          if(s[i]!=' '&&s[i+1]!=' ')
		  {
			  swap(s[i],s[i+1]);
			  i=i+2;
		  }
		  else
		    i++;
		}
		cout<<s<<endl;
		num--;
	}
	return 0;
}
