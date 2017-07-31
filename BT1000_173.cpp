#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int TanSo[10]; // Bi?n toàn c?c

void TachSo(int n)
{
    while (n!=0)
    {
        int a = n % 10;
        TanSo[a]++;
        n/=10;
    }
}

int main()
{
    int Arr[10000];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++ )
    {
        cin >> Arr[i];
    }
    for(int i = 0 ; i <= 9; i++)
    {
        TanSo[i] = 0 ;
    }
    
    for(int i = 0 ; i < n ;i++)
    {
        TachSo(Arr[i]);
    }
    
    
    
    int ketQua;
    for(int i = 0 ; i <= 9 ; i++)
    {
        if(TanSo[i]>0)
        {
            ketQua = i;
            break;
        }
            
    }
    
    for(int i = 0 ; i <= 9 ; i++)
    {
        if(TanSo[i]>0 && TanSo[i]<TanSo[ketQua])
        {
            ketQua = i;
        }
    }
    
    // Theo b?n thì k?t qu? s? ra bao nhiêu ? 
    cout << ketQua;
    
    return 0;
}
