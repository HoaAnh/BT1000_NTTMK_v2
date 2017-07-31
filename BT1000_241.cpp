#include <iostream>
#include <vector>
#include <cmath>
#define Tat true
#define Mo false
using namespace std;

bool ktSoNguyenTo(int n)
{
    if(n==1)
        return false;
    for(int i = 2 ; i <= sqrt(n) ;i++ )
    {
        if(n%i==0)
            return false;
    }
    return true;
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
    bool flag = false;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(a[i]==0 && a[i+1]==0)
        {
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout <<1;
    else
        cout<<0;
    return 0;
}
