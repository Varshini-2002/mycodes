/*Given the following 3 values, find the total number of maximum chocolates you can eat.
m:Money you have to buy chocolates.  p:Price of each chocolate.  w:Number of wrappers to be returned for getting one extra chocolate.
input: 16   2  2  outpit: 15
input: 15  1  3   output: 22    */
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	int m,p,w,t=0,r;
	cin>>m>>p>>w;
	t=m/p;
	r=t;
	while(r>=w)
	{
	    t=t+(r/w);
	    r=(r/w)+(r%w);
	}
	cout<<t;
	return 0;
}
