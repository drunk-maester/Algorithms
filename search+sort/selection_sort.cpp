/*
	drunk-maester
	
	Selection Sort
	Time Complexity	O(n^2)	(all cases)
	Auxiliary Space O(1)
	used when memory write operation is a costly. 

*/
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int len)
{
	int min;

	for(int i = 0; i < len-1; ++i)
	{	min=i;
		for(int j =i+1 ; j < len; ++j)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		int temp;
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
int  main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for(int i = 0; i < len; ++i)
	cin>>arr[i];
	selection_sort(arr,len);
	//array after Selection sort 
	for(int i = 0; i < len; ++i)
	cout<<endl<<arr[i];
	return 0;
}
