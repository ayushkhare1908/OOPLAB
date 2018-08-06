#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
		return 1;
	else	
	{
		n=n*fact(n-1);
		return n;
	}
}

int main(void)
{
	int n,a;
	cin>>n;
		
	a=fact(n);
	cout<<a<<endl;
	
	return 0;
}
