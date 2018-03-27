/*
	@drunk-maester
	Quick sort
	Time comlexity O(n log n)	(Best + average case)
	Time comlexity O(n log n)	(worst case)
	Space complexity O(log n)
*/
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partit(int arr[],int low,int high)
{
	int pivot=arr[high];
	int index=low-1;
	for (int i = low; i < high; ++i)
	{
		if(arr[i]<pivot)
		{
		index++;
		swap(&arr[index],&arr[i]);
		}

	}
	swap(&arr[index],&arr[high]);
	return index+1;
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partit(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);

	}
}
int main(int argc, char const *argv[])
{
	int len;
	cout<<"len? "<<endl;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,len);
	for (int i = 0; i < len; ++i)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}