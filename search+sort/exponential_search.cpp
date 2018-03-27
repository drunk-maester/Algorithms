//drunk-maester
//Exponential search
//Time complexity O(log n)
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int f,int l,int key);
int expo_search(int arr[],int len,int key)
{
	if(arr[0]==key)
	return 0;
	int i=1;
	while(i<len && arr[i]<=key)
		i*=2;
	return binary_search(arr,i/2,min(i,len),key);
}
int binary_search(int arr[],int f,int l,int key)
{
	while(f<=l)
	{
		int mid=(f+l)/2;
		if(arr[mid]==key)
			return mid;
		if(arr[mid]>key)
			binary_search(arr,f,mid-1,key);
		else	
			binary_search(arr,mid+1,l,key);
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{cin>>arr[i];}
	int key;
	cin>>key;
	int status=expo_search(arr,len,key);
	 if(status == -1)
	 	cout<<"Element not found";
     else
        cout<<"Element found @ post. "<<status+1;
	return 0;

}

