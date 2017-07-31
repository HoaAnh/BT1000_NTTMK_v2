#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool KiemTra(int n)
{
    vector<int> a;
    n = abs(n);
    while(n!=0)
    {
        a.push_back(n%10);
        n/=10;
    }
    for(int i = 0 ; i < a.size();i++)
    
    {
        if(a[i]%2==0)
            return false;
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
    
    int result = 0;
    
    int index = 0;
    for(index;index<n;index++)
    {
        if(KiemTra(Arr[index])==true)
        {
            result = Arr[index];
            break;
        }
    }
    
    if(result == 0)
    {
        cout<<result;
        return 0;
    }
    
    
    for(int i = index;i<n;i++)
    {
        if(KiemTra(Arr[i])==true && Arr[i]>result)
        {
            result=Arr[i];
        }
    }
    cout<<result;
return 0;        
}
