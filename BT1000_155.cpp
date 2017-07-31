#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int Arr[10000];
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	
	int Min=Arr[0];
	int Max=Arr[0];
	int a,b;
	
	for(int i=0;i<n;i++)
	{
		if(Min>Arr[i])
		{
			Min=Arr[i];
			a=Arr[i];
		}
	}
		
	for(int i=0;i<n;i++)
	{	
		if(Max<Arr[i])
		{
			Max=Arr[i];
			b=Arr[i];
		}
	}
	
	cout<<"["<<a<<","<<b<<"]";
return 0;		
}
