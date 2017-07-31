




#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector < vector< int> > a;
    int m , n;
    int sum;
    cin>>m>>n;
    a.resize(m);
    for(int i=0;i<m;i++)
    {
        a[i].resize(n);
        for(int j=0;j<n;j++)
        {
            //cout<<"a["<<i<<"]"<<"["<<j>>"]: ";
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    int tong = 0;
    int tich;
    for(int i = 0 ; i < n ;i++)
    {
        tich = 1;
        for(int j = 0 ; j < m ; j++)
        {
            //cout << a[j][i]<<" ";
            tich = tich * a[j][i];
        }
        cout <<"Tich tai cot thu "<<i<<" : "<<tich<<endl;
        tong= tong + tich;
        //cout << endl;
    }
    cout << "Tong : "<<tong<<endl;    
    return 0;
}

