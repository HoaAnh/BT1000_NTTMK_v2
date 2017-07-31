#include<iostream>
using namespace std;
int main()
{
    int Arr[10000];

    int n;
    cin>>n;

    int Gtam=-1;
    
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(Arr[i]<0)
        {
            Gtam=i;
            break;
        }
        
    }
    
    int i;
    if(Gtam==-1)
    {
        cout<<-1;
        return 0;
    }
    
    else
    {
    
        for(i=1;i<n;i++)
        {
            if(Arr[i]<0&&Arr[i]>Arr[Gtam])
            {
                Gtam=i;
            }
        }

        cout<<Gtam;
    }
    return 0;
}
