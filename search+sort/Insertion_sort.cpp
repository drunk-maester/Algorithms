/*
	drunk-maester
	
	Insertion sort
	Time Complexity
	best case 		O(n)
	worst case		O(n^2)
	average case 	O(n^2)
	Auxiliary Space O(1)
	Sorting In Place 
	Stable 
*/
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int len)
{	int hole;
	for(int i = 1;i < len;++i)
	{
		hole=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>hole)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=hole;
	}

}
int  main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for(int i = 0; i < len; ++i)
	cin>>arr[i];
	insertion_sort(arr,len);
	//array after insertion 
	for(int i = 0; i < len; ++i)
	cout<<endl<<arr[i];
	return 0;
}