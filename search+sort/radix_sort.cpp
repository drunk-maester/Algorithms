/*
	Radix sort
	only used to sort numbers
	Time complexity O(nk)	(all cases)
	space complexity O(n+k);*/
#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int len,int exp)
{	
	int op[len];
	int count[10]={0};
	for (int i = 0; i < len; ++i)
	count[(arr[i]/exp)%10]++;
	//sum count
	for (int i = 1; i < 10; ++i)
	count[i]+=count[i-1];
	//making op array
	for (int i = len-1; i > 0; i--)
	{
		op[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
	}
	  for (int i = 0; i < len; i++)
        arr[i] = op[i];

}


void radix_sort(int arr[],int len,int max)
{
		cout<<"called"<<max<<endl;

for (int exp = 1; max/exp > 0; exp *= 10)
        countSort(arr,len,exp);
}

int main(int argc, char const *argv[])
{
	int len,max;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{	
		cin>>arr[i];		
	}
	max=arr[0];
	for (int i = 1; i < len; ++i)
	{	if(arr[i]>max)
			{max=arr[i];}			
	}

	radix_sort(arr,len,max);
	for (int i = 0; i < len; ++i)
		cout<<arr[i]<<endl;
	return 0;
}