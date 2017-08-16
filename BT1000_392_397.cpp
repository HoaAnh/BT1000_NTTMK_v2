#include<iostream>
#include<vector>
using namespace std;

void Nhap(vector<vector<int> > &a)
{
    int n, m;
    cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        a[i].resize(m);
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
}

void Xuat(vector<vector<int> > &a)
{
    int n= a.size();
    int m= a[0].size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void ChuyenMang1Chieu(vector<vector<int> > &a, int &x)
{
     int n = a.size();
    int m = a[0].size();
    vector<int> Array[1000];
   
    for(int i=0;i<n;i++)
    {
    
        for(int j=0;j<m;j++)
        {
            int x;
            cin >> x;
            Array[i].push_back(x);
        }
    }
    
}

void Xoa(vector<int> &Array)
{

    for(int i=0;i<Array.size();i++)
    {
        Array.erase(Array.begin()+12,Array.begin()+(Array.size()-1));
    }
    
}

/*

void Chen(vector<int> &Array)
{

    for(int i=0;i<Array.size();i++)
    {
       ;
    }
    
}
*/

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanViDong(vector<vector<int> > &a, int rowx , int rowy )
{
    int n  = a.size();
    int m = a[0].size();
    if(rowx == rowy || (rowx<0 || rowx>= n || rowy < 0 || rowy >= n))
        return;
    for(int i = 0 ; i < m ; i++)
    {
        swap(a[rowx][i],a[rowy][i]);
    }
}

//   9 0 3
//   2 3 1
// colx = 0
// coly = 2

// a[0][colx] va a[0][coly]

void HoanViCot(vector<vector<int> > &a, int colx , int coly )
{
    int n  = a.size();
    int m = a[0].size();
    if(colx == coly || (colx<0 || colx>= m || coly < 0 || coly >= m))
        return;
    for(int i = 0 ; i < n ; i++)
    {
        Swap(a[i][colx],a[i][coly]);
    }
}


// Dich xuong xoay vong
/*
87 75 62 54  
46 40 33 28
20 18 15 10
-20 67 53 23

[{a},{b},{c},{d}]

[{a},{b},{c}]

[{d},{a},{b},{c}]

temp = [-20 67 53 23]
*/
void Bai394_Cach1(vector<vector<int> > &a)
{
    int n  = a.size();
    int m = a[0].size();
    vector<int> temp(a[n-1]);
    a.erase(a.begin()+n-1);
    a.insert(a.begin(),temp);
}



/*
2 3
2 4
2 5
4 8
*/
//GanDong(a,3,2);
/*
2 3
2 4
2 5
2 5
*/


void GanDong(vector<int> &rowx , vector<int> rowy) // gan dong thu rowy cho dong thu rowx
{
    for(int i = 0 ; i < rowx.size();i++)
    {
        rowx[i] = rowy[i];
    }
}

void GanDong(vector<vector<int> > &a, int rowx , int rowy) // gan dong thu rowy cho dong thu rowx
{
    // a[rowx] = a[rowy];
    int n  = a.size();
    int m = a[0].size();
    if(rowx == rowy || (rowx<0 || rowx>= n || rowy < 0 || rowy >= n))
        return;
    for(int i = 0 ; i < m;i++)
    {
        a[rowx][i] = a[rowy][i];
    }
}


/*
87 75 62 54  
46 40 33 28
20 18 15 10
-20 67 53 23

[{a},{b},{c},{d}]

temp = {d};

[{a},{a},{b},{c}]


[{d},{a},{b},{c}]

*/

void Bai394_Cach2(vector<vector<int> > &a)
{
    int n  = a.size();
    int m = a[0].size();
    //vector<int> temp(a[n-1]);
    vector<int> temp;
    for(int j = 0 ; j < m ; j++)
    {
        temp.push_back(a[n-1][j]);
    }
    
    for(int i = n-1; i >=1 ; i-- )
    {
        GanDong(a,i,i-1);
        // GanDong(a[i],a[i-1]);
    }
    GanDong(a[0],temp);
}

/*
46 40 33 28
20 18 15 10
-20 67 53 23


87 75 62 54 
*/
void Bai395(vector<vector<int> > &a)
{
    int n  = a.size();
    int m = a[0].size();
    vector<int> temp(a[0]);
    a.erase(a.begin()+0);
    a.insert(a.begin()+n-1,temp);
}

/*
m = 4
n = 5
87 75 62 54
46 40 33 28
20 18 15 10
-20 67 53 23
33 12 32 23
temp = {87,46,20,-20, 33}

75 62 54 54  = a[i][m-1] = temp[i]
40 33 28 28  = a[1][3] = temp[1]
18 15 10 10  = a[2][3] = temp[2]
67 53 23 23  = a[3][3] = temp[3]
12 32 23 23  = a[4][3] = temp[4]

i = 0 :
  j = 0 ( a[j][i] == a[j][i+1]) a[0][0] = a[0][1];
  j = 1 (a[j][i] == a[j][i+1]) a[1][0] = a[1][1];
*/
void Bai396(vector<vector<int> > &a)
{
    int n  = a.size();
    int m = a[0].size();
    vector<int> temp;
    for(int i = 0 ; i < n ; i++)
    {
        temp.push_back(a[i][0]);
    }
    for(int i = 0 ; i < m - 1; i++)
    {
        for( int j = 0 ; j < n ;j++)
        {
            a[j][i] = a[j][i+1];
        }
    }
    for(int i = 0 ; i < n; i++)
    {
        a[i][m-1] = temp[i];
    }
}


/*
input:
87 75 62 54
46 40 33 28
20 18 15 10
-20 67 53 23

B1:
temp [] = {a[0][3] , a[1][3] , a[2][3] , a[3][3]}
temp[] ={54,28,10,23}
B2:
87 75 62 62        87 75 75 62        87 87 75 62
46 40 33 33        46 40 40 33        46 46 40 33
20 18 15 15        20 18 18 15        20 20 18 15 
-20 67 53 53       -20 67 67 53       -20 -20 67 53 

output:
54 87 75 62 
28 46 40 33 
10 20 18 15 
23 -20 67 53 
*/
void Bai397(vector<vector<int> > &a)
{
    int n  = a.size();
    int m = a[0].size();
    vector<int> temp;
    for(int i = 0 ; i < n ; i++)
    {
        temp.push_back(a[i][m-1]);
    }
    
    
    for(int cot = m-1 ; cot >= 1; cot--)
    {
        for( int dong = 0 ; dong < n ;dong++)
        {
            a[dong][cot] = a[dong][cot-1];
        }
    }
    for(int i = 0 ; i < n; i++)
    {
        a[i][0] = temp[i];
    }
}

/*
input:
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
B1:
temp = 4;
1  1  2  3
5  6  7  8
9  10 11 12
13 14 15 16
B2:
temp2 = 16
1  1  2  3
5  6  7  4(temp)
9  10 11 8
13 14 15 12

B3:
temp3 = 13
1  1  2  3
5  6  7  4
9  10 11 8
14 15 16(temp2) 12

B4:
5  1  2  3
9  6  7  4
13(temp3)  10 11 8
14 15 16 12

output:
5  1  2  3
9  6  7  4
13  10 11 8
14 15 16 12
*/


int main()
{
    vector<vector<int> > a;
    vector<int> Array;
    int x;
    Nhap(a);
    Xuat(a);
    cout<<endl;
    //Bai394_Cach2(a);
    Bai397(a);
    Xuat(a);
    return 0;
}    
