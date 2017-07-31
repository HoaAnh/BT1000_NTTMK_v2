#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool KiemTra(int n)
{
    int a=0;
    vector<int>Arr;
    
    while(n>0)
    {
        a=n%10;
        Arr.push_back(a);
        n=n/10;
    }
    
    int na=Arr.size();
    
    for(int i=0;i<Arr.size()/2;i++)
    {
        if(Arr[i]!=Arr[na-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int Arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    int result = -1;
    
    for(int i=0;i<n;i++)
    {
        if(KiemTra(Arr[i])==true)
        {
            result=Arr[i];
            break;
        }
    }
    cout<<result;
return 0;        
}
