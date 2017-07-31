#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
		int F[1000];
	
	 F[0]=0;
	F[1]=1;
	

	for(int i=2;i<=n;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<F[i]<<" ";
	}
	return 0;
}
