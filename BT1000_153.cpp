#include<iostream>
using namespace std;

int Arr[10000];

bool Ktsochan(int x)
{
    
        if(x%2==0)
            return true;
        else
            return false;  
}

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    int i,j;
    int temp = -1;
    for(i=1;i<n;i++)
    {
        if(Arr[i]%2==0)
        {
            temp=Arr[i];
            break;
        }
    }
    if(temp==-1) // m?ng toàn l?
    {
        cout << -1;
        return 0;
    }
    else
    {
        for(j=1;j<n;j++)
        {
            if(Arr[i]%2==0&&Arr[i]<temp)
            {
                temp=Arr[i];
            }
        }
        cout<<temp;
    }
    return 0;
}
