/*
	@drunk-maester
	
	Bubble Sort
	
	Time Complexity	O(n^2)
	O(n) for Best case
	Space complexity O(1)

*/
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 	{
 		for (j = 0; j < n-i-1; j++) 
         { 
           if (arr[j] > arr[j+1])
              {

			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;     	
         
              }
         }     
     } 
}

int  main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for(int i = 0; i < len; ++i)
	cin>>arr[i];
	bubbleSort(arr,len);
	//array after Bubble Sort 
	for(int i = 0;i < len; ++i)
	cout<<endl<<arr[i];
	return 0;
}
/*
64 34 25 12 22 11 90*/