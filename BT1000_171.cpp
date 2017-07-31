#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int UCLN(int a , int b)
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
    int n;
    cin>>n;
    int Arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    int ketQua = Arr[0];
    
    for(int i = 1 ; i < n ;i++)
    {
        ketQua = UCLN(ketQua,Arr[i]);
    }
    
    cout << ketQua;
    
    return 0;        
}
