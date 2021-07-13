/* given n number of elements. find odd occuring elements.
example: input: 12
4 4 4 4 5 5 5 3 3 2 2 3
output: 3 5 */



#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {

    map <int,int> m;
	int k,n;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
	    m[k]++;
    }
	for(auto x:m)
	{
	    if(x.second%2!=0)
	     cout<<x.first<<" ";
	}
	return 0;
}
