//drunk-maester
//Interpolation Search
//Time Complexity o(log log n)
#include<bits/stdc++.h>
using namespace std;
int polation_search(int arr[],int first,int last,int key)
{
	int pos;
	while(first<=last && key>=arr[first] && key<=arr[last])
	{
	pos=first + (((double)(last-first)/(arr[last]-arr[first]))*(key-arr[first]));
	if(arr[pos]==key)
	return pos+1;
	if(arr[pos]<key)
	first=pos+1;
	else
	last=pos-1;
		
	}
	return 0;	

}
int main()
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{	cin>> arr[len]; }
	int key;
	cin>>key;
	int status;
	status=polation_search(arr,0,len-1,key);
	if(status)
	 	cout<<"Element found @ post. "<<status;
	else
		cout<<"Element not found";
		
        
	return 0;

	
}