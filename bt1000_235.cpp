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
    
    for(int i = 0 ; i < n ;i++)
    {
        bool check = false;
        for(int j = 0 ; j < m; j++)
        {
            if(b[j]==a[i])
            {
                check = true;
                break;
            }
                
        }
        if(check == false)
            dem++;
    }
    
    
    
    for(int i = 0 ; i < m ;i++)
    {
        bool check = false;
        for(int j = 0 ; j < n; j++)
        {
            if(a[j]==b[i])
            {
                check = true;
                break;
            }
                
        }
        if(check == false)
            dem++;
    }
    
    cout << dem;
    return 0;
}
