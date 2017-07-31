#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> Arr;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		Arr.push_back(a);
	}
	int a;
	for(int i=0;i<n;i++)
	{
		if(Arr[i]<0)
		{
		
			a=Arr[i];
		}
	}
	cout<<a;
}
