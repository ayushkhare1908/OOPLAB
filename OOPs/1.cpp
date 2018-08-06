#include<iostream>
using namespace std;
int main()
{
	int i,j,r;
	
	cout<<"Enter integer i ";
	cin>>i;
	
	cout<<"Enter integer j ";
	cin>>j;
	
	r=i/j;
	i=j*(r+1);
	
	cout<<"Round off integer i "<<i<<endl;
	
	return 0;
}
