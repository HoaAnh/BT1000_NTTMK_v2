#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[10000];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	
	int Min=0;
	int flag=-1;
	for(i=1;i<n;i++)
	{
		if(Arr[i]>0&&Arr[i]<Arr[Min])
		{
			Min=i;
			flag=Min;
		}
		
	}
	return flag;
	
	//return 0;	
}
