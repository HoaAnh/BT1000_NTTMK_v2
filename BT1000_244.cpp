#include <iostream>
#include <vector>
#include <cmath>
#define Tat true
#define Mo false
using namespace std;
bool ktSoHoanThien(int n);
bool ktSoHoanThienLonHon256(int n)
{
    if(ktSoHoanThien(n)== true && n > 256)
        return true;
    else
        return false;
}

bool ktSoHoanThien(int n)
{
    int sum = 0;
    for(int i = 1 ; i < n ;i++)
    {
        if(n%i==0)
            sum+=i;
    }
}



int main() {
    int a[1000];
    bool kiemTra[1000];
    //vector<int> giaTri;
    int dem=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag = false; // gi? s? trong m?ng không có s? ht nào 
    // l?n hon 256
    for(int i = 0 ; i < n ; i++)
    {
        if(ktSoHoanThienLonHon256(a[i])==true)
            flag = true;
    }
    if(flag == true)
        cout << 0;
    else
        cout << 1;
    return 0;
}
