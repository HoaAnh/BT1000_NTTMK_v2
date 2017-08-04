#include <iostream>
#include <vector>
#include <cmath>
#define Tat true
#define Mo false
using namespace std;
int KiemTraMangToanChan(int n, int a[])
{
    for(int i=0;i<n;i++) 
    {
        if(a[i]%2==1)
        {
            return 0;   
        }
        else
            continue;
    }
    return 1;
}

int KiemTraMangDoiXung(int n, int a[]) // n?u d?i x?ng thì tr? v? 1 , ngu?c l?i tr? v? 0
{
    int flag = 1;
   for(int i=0;i<n/2;i++)
   {
       if(a[i]==a[n-i-1])
           continue;
       else
       {
           flag = 0;
           break;
       }
   }
    return flag;
}
// n = 5
// 0    1    2    3    4
// 2    1    2    1    4
// xét a[0] v?i a[4], mà a[0] là a[i] -> a[4] là a[n-1-i]
// xét a[1] v?i a[3], mà a[1] là a[i] -> a[3] là a[n-1-i]

// n = 6 A[6]
// 0    1    2    3    4    5  6
// 10.1 12   23   12   10.1 3  -1231241232738612837

int KiemTraTinhChanLe(int n, int a[]) // n?u ch?n l? thì tr? v? 1, ngu?c l?i tr? v? 0
{
    int flag=1;
    for (int i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])%2==1)
        {
            continue;
        }
        else 
        {
            flag=0;
            break;
        }
    }
    return flag;
}

// n = 6
// 1 2 3 6 7 8


int KiemTraMangTangDan(int n,int a[])
{    
    int flag =1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            continue;
        }
        else
        {
            flag=0;
            break;
        }
            
    }
    return flag;
}


int KTCSC(int n, int a[], int &d)
{
    // 0 1 2 3  4  5
    // 1 4 7 11 14 17
    // 4 1
    // 7 4
    // 11 7
    // 14 11
    // 17 14
    int congsai = a[1] - a[0];
    int flag =1;
    for(int i=2;i<n;i++)
    {
        if(a[i]-a[i-1] == congsai)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        d = congsai;
    
    return flag;
}


int MBN(int n, int a[])
{
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            flag=0;
            break;
        }
        
    }
    return flag;
}

int MATMB(int n, int m,int a[],int b[])
{
    if(n>m)
    {
        return 0;
    }
    else
    {
        int flag = 0;
        for(int i=0;i<=m-n;i++)
        {
            if(b[i]==a[0])
            {
                int j;
                for(j=0;j<n;j++)
                {
                    if(a[j]==b[j+i])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==n)
                {
                    flag = 1;
                    break;
                }
                
            }
        }
        return flag;
        
    }
}

int main() {
    int a[1000];
    int b[1000];
 
    int d = 0 ;
    int n,m;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
   /* if(KTCSC(n,a,d)==0)
        cout<<"NO";
    else
    {
        cout<<"Yes\n";
        cout << "d la "<<d;
    } 
    
    if(MBN(n,a)==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    } */
    
    if(MATMB(n,m,a,b)==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    } 

    return 0;
}
