#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[1000];
	
	for( int i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	int Max(0);
	int a(0);
	for( int i=1;i<=n;i++)
	{	
		if(Max<Arr[i])
		{
			Max=Arr[i];
			 a=i;
		}
	
	}
		cout<<a;
}
