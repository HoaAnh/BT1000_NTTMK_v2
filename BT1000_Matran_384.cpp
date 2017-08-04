#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Nhap(vector<vector<int> > &a)
{
    int n, m;
    cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        a[i].resize(m);
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
}

void Xuat(vector<vector<int> > a)
{
    int n = a.size();
    int m = a[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
}

int PTLN(vector<vector<int> >a)
{
    int n = a.size();
    int m = a[0].size();
    int Max = a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]>Max)
            {
                Max=a[i][j];
            }
        }
    }
    return Max;
}

int DemPTLN(vector<vector<int> > a, int Max )
{
    int n = a.size();
    int m = a[0].size();
    int dem=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(Max==a[i][j])
            {
                dem++;
            }
        }
    }
    return dem;
}



void TachSo(int x, vector<int> &TanSo)
{
    x = abs(x);
    while(x>0)
    {   
        int SoTach = x%10;
        TanSo[SoTach] += 1;
        x=x/10;
    }
}

// 0 1 2 3 4 5 6 7 8 9
// 2 2 1 1 0 0 0 0 0 1 

// Tach so : 0
// Sotach = 0

/*

3 4
11 2 3 6
2 3 23 1
2 3 6 1

// 0 1 2 3 4 5 6 7 8 9
// 0 4 4 4 0 0 2 0 0 0


*/

vector<int> TanSo(10);
void XuatMang1Chieu(vector<int> a)
{
    for(int i  = 0 ; i < a.size() ; i++)
    {
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}

vector<int> CSoXHNN(vector<vector<int> >a )
{
    int n = a.size();
    int m = a[0].size();
    
    for(int i = 0 ; i < 10 ; i++)
        TanSo[i] = 0;
    
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            TachSo(a[i][j],TanSo);
        }
    }
    
    int index=0; // gi? s? s? 0 xuát hi?n nhi?u nh?t
    for(int i=0;i<10;i++)
    {
        if(TanSo[index]<TanSo[i])
        {
            index=i;
        }
    }
    
    vector<int> resultArr;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(TanSo[i] == TanSo[index])
        {
            resultArr.push_back(i);
        }
    }
    return resultArr;
    
}

int main()
{
    vector<vector<int> > a;
    Nhap(a);
    
    vector<int> mangTraVe = CSoXHNN(a);
    
    
    XuatMang1Chieu(TanSo);
    XuatMang1Chieu(mangTraVe);
    
    
    return 0;
}
