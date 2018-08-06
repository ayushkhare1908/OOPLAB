#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	
	cout<<"Enter the number ";
	cin>>i;
	
	while(i!=0)
	{
		count++;
		i=i/10;
	}
	
	cout<<"Number of digits "<<count<<endl;
	return 0; 
}
