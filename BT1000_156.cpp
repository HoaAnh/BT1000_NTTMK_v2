#include <iostream>
using namespace std;
int main()
{
    int Arr[10000];

    int n;
    cin>>n;

    
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    int x;
    cin >> x;
    
    int dolech;
    int ans;
    dolech = Arr[0]-x;
    ans = Arr[0];
    for(int i = 1 ;  i < n ; i++)
    {
        if(Arr[i]-x > dolech)
        {
            dolech = Arr[i] - x;
            ans  = Arr[i];
        }
    }
    cout << ans;
    
    
    return 0;
}
