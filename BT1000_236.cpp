#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


// O(nlogn)
// O(n^2)
// a 
// i,j
// cnt
// res, ans 
int main() {
    int  a[100],b[100];
    int n,m;
    int dem = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> b[i];
    }
    for(int i = 0 ; i <= m-n; i++)
    {
        if(b[i]==a[0])
        {
            int j;
            for(j = 0;j<n;j++)
            {
                if(b[i+j]!=a[j])
                    break;
            }
            if(j==n) // mang a co xuat hien trong b
                dem++;
        }
    }
    
    cout << dem;
    return 0;
}
