#include <iostream>
using namespace std;

int main() {
    int a[1000];
    bool kiemTra[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i < n ;i++)
    {
        kiemTra[i] = false;
    }
    
    int tanSo = 0;
    int giaTri = -1;
    for(int i=0;i<n;i++)
    {
       if(kiemTra[i]==false)
       {
           int ts = 1;
           kiemTra[i] = true;
           for(int j = i +1 ; j < n ;j++)
           {
               if(a[j]==a[i])
               {
                   ts++;
                   kiemTra[j] = true; 
               }
           }
           if(ts>tanSo)
           {
               tanSo = ts;
               giaTri = a[i];
           }
       }
    }
    cout << giaTri <<" xuat hien nhieu nhat : "<<tanSo<<" lan";
    return 0;
}
