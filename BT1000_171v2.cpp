#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long UCLN(long long a , long long b)
{
    while (a!=b)
    {
        if(a>b)
            a = a - b;
        else
            b = b -a;
    }
    return a;
}

int main()
{
    long long n;
    cin>>n;
    long long Arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    long long ketQua = Arr[0];
    long long tich = Arr[0];
    
    for(int i = 1 ; i < n ;i++)
    {
        ketQua = UCLN(ketQua,Arr[i]);
        tich *= Arr[i];
    }
    
    cout << tich/ketQua;
    
    return 0;        
}
