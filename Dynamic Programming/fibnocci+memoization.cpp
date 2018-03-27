//fibnocci soln. using memoization

#include<bits/stdc++.h>
using namespace std;
#define NIL -1
int Memo[100];
void setval()
{
	for (int i = 0; i <100; ++i)
		Memo[i]=NIL;
}
int fib(int val)
{
	if(Memo[val]==NIL)
	{
		if(val<=1)
			Memo[val]=val;
		else
			Memo[val]=fib(val-1)+fib(val-2);
	}
	return Memo[val];
}
int main(int argc, char const *argv[])
{	
	int val;
	cin>>val;
	setval();
	cout<<fib(val);
	return 0;
}