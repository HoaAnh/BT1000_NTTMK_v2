#include<iostream>
#include<vector>
using namespace std;

void Nhap(vector<vector<int> > &a)
{
	int n,m;
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		a[i].resize(m);
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
	    }
	}
}

void Xuat(vector<vector<int> > &a)
{
	int n= a.size();
	int m= a[0].size();
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void XuatDong(vector<vector<int> > a, int row)
{
    for(int i = 0 ; i <a[row].size(); i++)
    {
        cout<<a[row][i]<<" ";
    }
    cout<<endl;
}

void DemSoChan(vector<vector<int> > &a, vector<int> &v)
{
	int n=a.size();
	int m=a[0].size();
	v.resize(n);
	for(int i=0; i<n; i++)
	{
		int dem=0;
		for(int j=0; j<m ;j++)
		{
			if(a[i][j]%2==0)
			{
				dem=dem++;
			}
		}
		v[i]=dem;
	}
}

int GTLNcuaMangDemSoChan(vector<int> soChanTungDong)
{
	int n=soChanTungDong.size();

	int _max=soChanTungDong[0];
	for(int i=0; i<n; i++)
	{
		if(_max<soChanTungDong[i])
		{
			_max=soChanTungDong[i];
		}
	}
	return _max;
}

void Bai387(vector<vector<int> >a)
{
	vector<int> soChanTungDong;
	DemSoChan(a, soChanTungDong);
	int Max = GTLNcuaMangDemSoChan(soChanTungDong);
    for(int i = 0; i < soChanTungDong.size();i++)
    {
        if(soChanTungDong[i] == Max)
        {
            XuatDong(a,i);
        }
    }
	
}

int main()
{
	vector<vector<int> >a;

	Nhap(a);
	Bai387(a);

	return 0;
}
