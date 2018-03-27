/* 
	@drunk-maester
	
	merge-sort
	
	Time complexity		O(n Log n)  (all cases)
	Space complexity    O(n)
*/
#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int l1=m-l+1;
	int l2=r-m;int lef[l1],rig[l2];
	for (int i = 0; i < l1; ++i)
	{
		lef[i]=arr[l+i];
	}
	for (int i = 0; i < l1; ++i)
	{
		rig[i]=arr[m+i];
	}
	int i=0,j=0,k=l;
	while((i<n1)&&(j<n2))
	{
		if (lef[i]<rig[j])
		{
			arr[k]=lef[i];i++;k++;
		}
		else
			{
			arr[k]=rig[j];j++;k++;
		}

	}
	while(i<n1)
	{
			arr[k]=lef[i];i++;k++;
		

	}	
	while(j<n2)
	{
			arr[k]=rig[j];j++;k++;
		
	}	


}
void mergesort(int arr[],int l,int r)
{
	int m=l+r/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}
int main(int argc, char const *argv[])
{
	int len;
	cin>>len;
	int arr[len];
	for (int i = 0; i < len; ++i)
	{
		cin>>arr[i];
	}
	len=sizeof(arr)/sizeof(arr[0]);
	void mergesort(arr,0,len-1);
	return 0;
}