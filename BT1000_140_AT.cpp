#include <iostream>
using namespace std;
int a[100];


int main() {
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int giaTriDuongNhoNhat = -1;
    int i,j;
    // Tim gia tri duong dau tien
    for( i = 0 ; i < n ;i++)
    {
        if(a[i]>0)
        {
            giaTriDuongNhoNhat = a[i];
            break;
        }
    }
    // neu khong co gia tri duong
    if(giaTriDuongNhoNhat == -1)
    {
        cout<<giaTriDuongNhoNhat;
        return 0;
    }
    // Tim gia tri duong nho nhat
    for(j = i+1 ; j < n;j++)
    {
        if(a[j]>0 && a[j]<giaTriDuongNhoNhat)
        {
            giaTriDuongNhoNhat = a[j];
        }
    }
    
    cout << giaTriDuongNhoNhat;
    
    return 0;
}
