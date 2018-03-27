// 0/1 knapsack bounded
// item repition is not allowed
// Dp
#include<bits/stdc++.h>
using namespace std;
void knapsack(int val[],int wt[],int len,int weigh)
{
	int arr[len+1][weigh+1];
	for (int i = 0; i <=len; ++i)
	{
		for (int j = 0; j <= weigh; ++j)
		{
			if(i==0 || j==0)
				arr[i][j]=0;
			else if(wt[i-1]<=j)
				arr[i][j]=max(val[i-1] + arr[i-1][j-wt[i-1]],  arr[i-1][j]);
			else
                 arr[i][j] = arr[i-1][j];
		}
	}
	cout<<arr[len][weigh];
}
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;int val[len],wt[len];
	for (int i = 0; i < len; ++i)
	cin>>val[i];
	for (int i = 0; i < len; ++i)
	cin>>wt[i];
	int weigh;
	cin>>weigh;
	knapsack(val,wt,len,weigh);
	return 0;
}