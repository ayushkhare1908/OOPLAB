#include<iostream>
using namespace std;
int main()
{
	int n,k,max,i,c;
	
	cout<<"Number of elements in array ";
	cin>>n;
	int a[n];
	
	cout<<"Kth Largest element ";
	cin>>k;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	while(k--)
	{	max=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
				{
					max=a[i];
					c=i;					
				}
		}
		a[c]=0;
	}
	cout<<max<<endl;
}
