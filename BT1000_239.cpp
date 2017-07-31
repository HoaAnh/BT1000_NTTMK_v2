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
    for(int i = 0 ; i < n ;i++)
    {
        if(ktSoNguyenTo(a[i])==false)
            kiemTra[i] = Tat;
        else 
            kiemTra[i] = Mo;
    }
    
    for(int i=0;i<n;i++)
    {
       if(kiemTra[i]== Mo )
       {
           dem++;
           for(int j = i; j < n ;j++)
           {
               if(a[j]==a[i])
               {
                   kiemTra[j] = Tat; 
               }
           }
           
       }
    }
    
    //int number = giaTri.size();    
    cout<<dem;
    return 0;
}
