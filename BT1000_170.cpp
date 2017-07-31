#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool KiemTra(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
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
    int ketQua;
    // Camel
    // Tìm giá tri l?n nh?t trong m?ng
    int Max = Arr[0]; 
    for(int i=0;i<n;i++)
    {
        if(Max<Arr[i])
        {
            Max=Arr[i];
        }
    }
    
    for(int i = Max+1;;i++)
    {
        if(KiemTra(i)==true)
        {
            ketQua = i;
            break;
        }
    }
    
    cout << ketQua;
    
    return 0;        
}
