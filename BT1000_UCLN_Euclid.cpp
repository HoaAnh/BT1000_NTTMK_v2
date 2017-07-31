#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    
    // https://vi.wikipedia.org/wiki/Gi%E1%BA%A3i_thu%E1%BA%ADt_Euclid
    
    int a ,b;
    int gcd;
    cin >> a >> b;
    
    /*
    
    a = x*b + k ( x g?i là thuong, k g?i là s? du)
    b = x'*k + h (x'g?i là thuong, h g?i là s? du)
    l?p d?n khi nào s? du b?ng 0
    
    ///pseudocode
    cách 1 : 
    trong khi (a <> b) thì
    {
        n?u (a>b) thì a = a - b;
        ngu?c l?i b = b -a;
    }
    k?t qu? là a ho?c b
    */
    
    /* code cách 1
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b= b-a;
    }
    gcd = a;
    cout << gcd;
    */
    
    
    /* code cách 1.1
    while(a!= 0 && b !=0)
    {
        if(a>b)
            a=a-b;
        else
            b= b-a;
    }
    // sau khi k?t thúc vòng l?p , s? có m?t s? = 0, s? còn l?i chính là k?t qu?
    gcd = a + b;
    
    cout << gcd;
    */
    
    /* 
    cách 2 :
    g?i s là s? du c?a a chia cho b ( s = a mod b)
    
    trong khi (s <> 0) thì
    {
        a = b;
        b = s;
        s = a mod b;
    }
    
    k?t qu? là a
    
    */
    
    //
    //a = 84 , b = 174 , s  = 84
    //a = 174, b = 84 ,  s = 6
    //a = 84 , b = 6 , s......    
    
    
    
    int s; // s? du c?a a chia cho b
    while(b!=0)
    {
        s = a % b;
        a = b;
        b = s;
    }
    gcd = a;
    
    
    cout << gcd;
    return 0;
}
