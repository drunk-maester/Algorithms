//soln. using tabulation
#include<bits/stdc++.h>
using namespace std;
int fib(int val)
{
	int table[val+1];
	table[0]=0;
	table[1]=1;
	for (int i = 2; i <= val; ++i)
	{	
		table[i]=table[i-1]+table[i-2];
				
	}
	return table[val];
}
int main()
{
int val;
cin>>val;
cout<<fib(val);
}