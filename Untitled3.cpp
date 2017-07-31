#include<iostream>
#include<vector>
using namespace std;
int main()
{
	void Nhap(vector<vector<int>> &a, int &m, int &n)
	{
		cin>>m>>n;
		a.resize(m);
		for(int i=0;i<m;i++)
		{
			a[i].resize(n);
			for(int j=0;j<n;j++)
			{
				cout<<"a["<<i<<"]"<<"["<<j>>"]: ";
				cin>>a[i][j];
			}
		}
		sum=sum+a[i][j];
	}
}
