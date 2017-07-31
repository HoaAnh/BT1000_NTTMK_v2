

//Tong cot, tich dong

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
    
    
    int tong=0;
    int tich=1;
    
    for(int i=0;i<m;i++)
    {
        tong=0;
        for(int j=0;j<n;j++)
        {
            tong=tong+a[i][j];
            
        }
        cout<<"Tong thu"<<i<<" :"<<tong<<endl;
        tich=tich*tong;
    }
    cout<<"Tich :"<< tich;
    
