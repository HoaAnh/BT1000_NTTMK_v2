#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


// O(nlogn)
// O(n^2)
int main() {
    int a[100];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    /*
    sort(a,a+n);// 0 --- n-1 
    int x;
    x = a[1]-a[0];
    int index = 1;
    for(int i = 2;i<n;i++)
    {
        if(a[i]-a[i-1] < x)
        {
            x = a[i] - a[i-1];
            index = i;
        }
    }
    
    cout << a[index-1]<<" "<<a[index];
    */
    
    
    
    
    int x , y, khoangcach;
    
    x = a[0]; 
    y = a[1];
    khoangcach = abs(x-y);
    for(int i = 0 ; i < n -1 ; i++)
    {
        for(int j = i+1; j < n ; j++)
        {
            if(abs(a[i]-a[j])<khoangcach)
            {
                khoangcach = abs(a[i]-a[j]);
                x = a[i];
                y = a[j];
            }
        }
    }
    cout <<x<<" "<<y;
    
    
    return 0;
}
