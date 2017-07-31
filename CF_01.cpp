#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h;
	cin>>h;
	int a=0;
	vector<int> Arr;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		Arr.push_back(a);
	}
	int b=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(Arr[i]<=h)
		{
			b++;
		}
	}
	sum=b+(n-b)*2;
	cout<<sum;
	return 0;
}
