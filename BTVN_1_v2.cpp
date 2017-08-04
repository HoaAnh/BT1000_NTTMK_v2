#include<iostream>
#include<cstring>

using namespace std;

int CATCB(int n, int m, char a[], char b[])
{
	if(n<m)
	
	{
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(a[0]==b[i])
			{
				int j;
				for(j=0;j<n;j++)
				{
					if(a[j]==b[j+i])
					{
						continue;
					}
					else
					{
						break;
					}
				}
				
				if(j==n)
				{
					flag=1;
					break;
				}
			}
		}
		return flag;
	}
	else
	return 0;
}

int main()
{
	char a[1000];
	char b[1000];
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	if(CATCB(n,m,a,b)==0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0;
}
