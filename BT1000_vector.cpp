#include <iostream>
#include <vector>
using namespace std;


void Xoa(vector<int> &a, int k)
{
    if(k<a.size())
    {
        a.erase(a.begin()+k);
    }
}


void inMang(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void XoaGiaTriChan(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            Xoa(a,i);
            i--;
        }
    }
}


void DichPhaiXoayVong(vector<int> &a)
{
    
    int result=a.back();
    a.insert(a.begin()+0,result);
    a.erase(a.begin()+a.size()-1);
}

int main()
{
    int mang[10] = {1,2,8,4,12,6,7,8,9,10};
    vector<int> a(mang,mang+10);
    // M?ng tru?c khi thao tác
    inMang(a);
    
    //DichPhaiXoayVong(a);
    int k = 5;
    
    for(int i=0;i<k;i++)
    {
        DichPhaiXoayVong(a);
    }
    
    
    
    
    // mang sai khi thao tac
    inMang(a);
    
    return 0;
}
