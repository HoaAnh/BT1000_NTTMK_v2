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
    int  arr[100];
    int n,a,b,c;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    sort(arr,arr+n);
    int dem = 0;
    int i,j;
    for(i = 0 ; i < n;)
    {
        j = i;
        while(arr[j]==arr[i] && j < n)
        {
            j++;
        }
        dem++;
        i = j;
    }
    cout<<dem;
    return 0;
}
