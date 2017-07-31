#include<iostream>

using namespace std;

int main()
{
	string A;
	cin>>A;
	
	for(int i=0;i<A.size();i++)
	{
		if(A[i]=='H'||A[i]=='Q'||A[i]=='9')
		{
			cout<<"YES";
			return 0;
		}
		
	
		
	}
	cout<<"NO";
	return 0;
}
