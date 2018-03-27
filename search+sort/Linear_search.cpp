//drunk-maester
//linear search
//Time Complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int len,int key)
{
	for (int i = 0; i < len; ++i)
	{	if(arr[i]==key)
		{
		cout<<"Element found at "<<i+1;
		return 0;		
		}
	}
	cout<<"Element not found";
	
}
int main(int argc, char const *argv[])
{
	int len,status;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	cin>>arr[i];		
	int key;
	cin>>key;
	search(arr,len,key);
	return 0;
}