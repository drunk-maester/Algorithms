//program for longest common subsequence
#include<bits/stdc++.h>
using namespace std;
void sequence(char *x,char *y,int m,int n)
{
	int arr[m+1][n+1];
	for (int i = 0; i <=m; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			if(i==0||j==0)
				arr[i][j]=0;
			else if(x[i-1]==y[j-1])
				arr[i][j]=arr[i-1][j-1]+1;
			else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

		}
	}
	int len= arr[m][n];
	char op[len];
	op[len]='\0';
	int i=m,j=n;
	while( i>0 && j>0 )
	{
		if(x[i-1]==y[j-1])
		{	op[len-1]=x[i-1];
			i--;j--;len--;
		}
	   else if (arr[i-1][j] > arr[i][j-1])
         i--;
      else
         j--;

	}
	cout<<op<<endl;
}

int main(int argc, char const *argv[])
{
	string st1,st2;
	cin>>st1>>st2;
	int m,n;
	m=st1.length();
	n=st2.length();
	sequence((char *)st1.c_str(),(char *)st2.c_str(),m,n);
	
	return 0;
}