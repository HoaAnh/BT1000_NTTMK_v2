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
    // 123
    // Arr = {3,2,1}
    // A[2] = 1 , Arr[Arr.size()-1];
    int na=Arr.size();
    if(Arr[na-1]%2==1)
        return true;
    return false;
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
    
    int result = 0;
    
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
