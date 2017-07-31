#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
   vector<int> Arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        Arr.push_back(a);
    }
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(Arr[i]==0)
        {
            b++;
        }
    }
    if((n==1 && b==0)||(n>1&&b==1))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
