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
    for(int i = 0 ; i < n ; i++) cout << arr[i]<<" ";
    cout<<endl;
    int i,j;
    for(i = 0 ; i < n;)
    {
        cout<<arr[i]<<" xuat hien : ";
        int dem = 0;
        for(j = i;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                dem++;
            }
            else
                break;
        }
        cout<<dem<<" lan"<<endl;
        i = j;
    }
    return 0;
}



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
    bool danhdau[100];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        danhdau[i]=false;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(danhdau[i]==false)
        {
            danhdau[i] = true;
            int dem = 1;
            for(int j = i+1 ; j < n ;j++)
            {
                if(a[j]==a[i])
                {
                    dem++;
                    danhdau[j]=true;
                }
                    
            }
            cout<<a[i]<<" xuat hien : "<< dem <<" lan"<<endl;
        }
    }
    return 0;
}
