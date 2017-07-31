#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[1000];
    bool kiemTra[1000];
    vector<int> giaTri, tanSo;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i < n ;i++)
    {
        kiemTra[i] = false;
    }
    
    for(int i=0;i<n;i++)
    {
       if(kiemTra[i]==false)
       {
           int ts = 1;
           kiemTra[i] = true;
           for(int j = i +1 ; j < n ;j++)
           {
               if(a[j]==a[i])
               {
                   ts++;
                   kiemTra[j] = true; 
               }
           }
           giaTri.push_back(a[i]);
           tanSo.push_back(ts);
       }
    }
    
    int number = giaTri.size();    
    int maxFrequency = 0;
    for(int i = 0 ; i < number ; i++)
    {
        if(tanSo[i]>maxFrequency)
            maxFrequency = tanSo[i];
    }
    
    for(int i = 0 ; i < number ; i++)
    {
        if(tanSo[i]==maxFrequency)
            cout<<giaTri[i]<<" ";
    }
    return 0;
}
