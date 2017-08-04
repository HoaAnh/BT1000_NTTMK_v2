#include<iostream>
using namespace std;

int DemGTLH( int n, int a[], int flag)
{
	//int flag=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			flag=dem++;
		}
	}
	return flag;
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	int flag=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	if(DemGTLH(n,a,flag)!=0)
	{
		cout<<"YES"<<endl;
		cout<<flag;
	}
	else
	{
		cout<<"NO"<<endl;
		cout<<flag;
	}
	return 0;
}


//ver.AT

#include<iostream>
using namespace std;

int DemGTLH( int n, int a[])
{
    int flag=0;
    int dem=0;
    for(int i=1;i<n;i++)
    {
        bool kiemtra = true; // so a[i] thoa ycbt
        for(int j = 0; j < i  ; j++)
        {
            if(a[j]>=a[i])
            {
                kiemtra = false;
                break;
            }
        }
        if ( kiemtra == true)
            flag++;
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    int res;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    res = DemGTLH(n,a);
    cout<<res;
    return 0;
}
