#include <iostream>
using namespace std;
int a[100];


bool KiemTraSoHoanThien(int x)
{
    int tong = 0;
    for(int i = 1 ; i < x ; i++)
    {
        if(x%i==0)
            tong+=i;
    }
    if(tong == x)
        return true;
    else 
        return false;
}


int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int index = -1;
    for(int i = n-1 ; i >=0;i--)
    {
        if(KiemTraSoHoanThien(a[i]))
        {
            //cout << "So "<<a[i]<<endl;
            index = i;
            break;
        }
    }
    
    cout << index;
    
    return 0;
}
