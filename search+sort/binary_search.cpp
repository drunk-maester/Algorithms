//drunk-maester
//Binary search
//Time complexity Theta(Logn)
//recurrence relation
#include <bits/stdc++.h>
using namespace std;
int binarysr(int arr[],int f,int l, int key)
{
	while(f<=l)
	{
	int mid=(f+l)/2;
	if(arr[mid]==key)
		return mid;
	if(arr[mid]>key)
		binarysr(arr,f,mid-1,key);
	else
		binarysr(arr,mid+1,l,key);
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	cin>>arr[i];
	int key;
	cin>>key;
	//if data is unsorted include the following comment
	//sort(arr,0,len); 
	int status=binarysr(arr,0,len-1,key);
	if(status)
		cout<<"elemet found @ post. "<<status+1;
	else
		cout<<"elemet not  found";

	return 0;
}