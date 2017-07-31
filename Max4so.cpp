#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	cout<<max(max(a,b),max(c,d));
}


