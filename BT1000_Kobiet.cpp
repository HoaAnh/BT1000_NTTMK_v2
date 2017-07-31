#include<iostream>
using namespace std;
int main()
{
	int s;
	
	cin>>s;
	int sum=0;
	int n=0;
	int Max=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		if(sum<s)
		{		
		
			if(Max>n)
			{
				Max=n;
					
			}
			
		}
		
	}
	cout<<n;
	
	
	return 0;
}
