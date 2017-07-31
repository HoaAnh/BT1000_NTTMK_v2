#include<iostream>

using namespace std;
int main()
{
	string A;
	cin>>A;
	int hoa=0;
	int thuong=0;
	
	for(int i=0;i<A.size();i++)
	{
		if(A[i]>=65&&A[i]<=90)
		{
			hoa++;
		}
		else if(A[i]>=97&&A[i]<=122)
		{
			thuong++;
		}
		
	}
	
	if(hoa>thuong)
	{
		for(int i=0;i<A.size();i++)
		{
			if(A[i]>=97&&A[i]<=122)
			{
				A[i]=A[i]-32;
			}
		}
		cout<<A;
		
	}
	
	else
	{
		for(int i=0;i<A.size();i++)
		{
			if(A[i]>=65&&A[i]<=90)
			{
				A[i]=A[i]+32;
			}
		}
		
		cout<<A;
	}
	return 0;
}
