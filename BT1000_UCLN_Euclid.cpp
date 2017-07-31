#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    
    // https://vi.wikipedia.org/wiki/Gi%E1%BA%A3i_thu%E1%BA%ADt_Euclid
    
    int a ,b;
    int gcd;
    cin >> a >> b;
    
    /*
    
    a = x*b + k ( x g?i l� thuong, k g?i l� s? du)
    b = x'*k + h (x'g?i l� thuong, h g?i l� s? du)
    l?p d?n khi n�o s? du b?ng 0
    
    ///pseudocode
    c�ch 1 : 
    trong khi (a <> b) th�
    {
        n?u (a>b) th� a = a - b;
        ngu?c l?i b = b -a;
    }
    k?t qu? l� a ho?c b
    */
    
    /* code c�ch 1
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
    
    
    /* code c�ch 1.1
    while(a!= 0 && b !=0)
    {
        if(a>b)
            a=a-b;
        else
            b= b-a;
    }
    // sau khi k?t th�c v�ng l?p , s? c� m?t s? = 0, s? c�n l?i ch�nh l� k?t qu?
    gcd = a + b;
    
    cout << gcd;
    */
    
    /* 
    c�ch 2 :
    g?i s l� s? du c?a a chia cho b ( s = a mod b)
    
    trong khi (s <> 0) th�
    {
        a = b;
        b = s;
        s = a mod b;
    }
    
    k?t qu? l� a
    
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
