#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[1001];
	for(int i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	int x;
	cin>>x;
	int y;
	cin>>y;
	
	for(int i=1;i<=n;i++)
	{
		if(x==Arr[i])
		{
			cout<<"Yes";
			break;
		}
		if(x!=Arr[i])
		{
		
			
		}
	cout<<"No";		
	}
	
}
