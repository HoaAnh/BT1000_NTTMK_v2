#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> Arr;
	int a;
	for(int i=0; i<n;i++)
	{
		cin>>a;
		Arr.push_back(a);
		cout<<Arr[i];
	}
	
	int i(0);
	int b;
	vector<int>::iterator it;
	for(it=Arr.begin(); it!=Arr.end(); it++)
	{
		if(Arr[i]>0)
		{
			cin>>b;
			Arr.push_back(b);
			
		}
	}
	cout<<Arr[b];
}
