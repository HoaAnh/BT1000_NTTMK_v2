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
    int  a[100];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(a[1]%2==0)
            {
                cout<<a[i]<<" ";
            }
        }
        else if(i==n-1)
        {
            if(a[n-2]%2==0)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {   
            if(a[i-1]%2==0 || a[i+1]%2==0 )
            {
                cout<<a[i]<<" ";
            }
        }
    }
    
    
    return 0;
}
