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
    
	int Min=Arr[0];
    int Max=Arr[0];
   	int i;
    
    for(i=0;i<n;i++)
    {
    	if(Min>Arr[i])
    	{
    		Min=Arr[i];
    	}
    	if(Max<Arr[i])
    	{
    		Max=Arr[i];
    	}
    }
    cout<<"["<<Min<<","<<Max<<"]";
return 0;
}
