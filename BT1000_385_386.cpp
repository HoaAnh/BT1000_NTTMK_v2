#include <iostream>
#include <vector>
using namespace std;

void XuatMang1Chieu(vector<int> v)
{
    for(int i = 0 ; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

/*
1 2 3
23 12 44
11 23 45
-1 23 -99


v[4] ={6,79,0,0}

i = 0;
{
    tong = 0;
    for()....
    tong = 1+2+3
}
v[0] = 6

i = 1
{
    tong = 0;
    for().....
    tong = 23 + 12 +44
}
v[1] = 79

*/

void TongTungDong(vector<vector<int> > a, vector<int> &v)
{
    int n = a.size();
    int m = a[0].size();
    v.resize(n);
    for(int i = 0 ; i < n;i++)
    {
        int tong = 0;
        for(int j = 0 ; j < m ; j++)
        {
            tong+=a[i][j];
        }
        v[i]=tong;
    }
}

void TongTungCot(vector<vector<int> > a, vector<int> &c)
{
    int n=a.size();
    int m=a[0].size();
    c.resize(m);
    for(int i=0; i<m; i++)
    { 
        int tong =0;
        for( int j=0; j<n; j++)
        {
            tong=tong+a[j][i];
        }
        c[i]=tong;
    }
     
}
void XuatCot(vector<vector<int> > a, int col)
{
    for(int i=0; i <  a.size();i++)
    {
        cout<< a[i][col]<<" ";
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

void Nhap(vector<vector< int> > &a)
{
    int n, m;
    cin>>n>>m;
    a.resize(n);
    for(int i=0; i<n; i++)
    {
        a[i].resize(m);
        for(int j=0; j<m ;j++)
        {
            cin>>a[i][j];
        }
    }
}

void Xuat(vector<vector< int> > &a)
{
    int n=a.size();
    int m=a[0].size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int GTLNCuaMangTongTungDong(vector<int> tongTungDong )
{
    /// 12 23 25 12
    int n = tongTungDong.size();
    int _max = tongTungDong[0];
    for(int i = 1 ; i < n ;i++ )
    {
        if(tongTungDong[i]>_max)
        {
            _max = tongTungDong[i];
        }
    }
    return _max;
}

int GTNNCuaMangTongTungCot(vector<int> tongTungCot)
{
    int m = tongTungCot.size();
    int min= tongTungCot[0];
    for(int i=1; i<m; i++)
    {
        if(tongTungCot[i]<min)
        {
            min=tongTungCot[i];
        }
    }
    return min;
}

void Bai385(vector<vector<int> > a)
{
    vector<int> tongTungDong;
    TongTungDong(a,tongTungDong);
    int Max = GTLNCuaMangTongTungDong(tongTungDong);
    for(int i = 0; i < tongTungDong.size();i++)
    {
        if(tongTungDong[i] == Max)
        {
            XuatDong(a,i);
        }
    }
}

void Bai386(vector<vector<int> > a)
{
    vector<int> tongTungCot;
    TongTungCot(a,tongTungCot);
    int Min=GTNNCuaMangTongTungCot(tongTungCot);
    XuatMang1Chieu(tongTungCot);
    for(int i=0; i< tongTungCot.size();i++)
    {
        if(tongTungCot[i]==Min)
        {
            XuatCot(a,i);
        }
    }
}


int main() {
    vector<vector<int> > a;
    Nhap(a);

    
    //Bai385(a);
    Bai386(a);
    
    return 0;
}
