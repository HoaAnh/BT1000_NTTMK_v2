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
    
    
    
   
    sum = 0;
    
    for(int i=0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            sum=sum+a[i][j];
        }
    }
    
    cout<<"Tong la: "<<sum;
    
    
    return 0;
}
