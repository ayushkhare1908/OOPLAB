#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	int a,a1,b,b1;
	int sq,i=32;
	while((sq=i*i)<=8899)
	{
		a=sq/1000;
		a1=(sq%1000)/100;
		b=(sq%100)/10;
		b1=(sq%10);
		
		if(a==a1 && b==b1)
			cout<<i*i<<endl;
		
		i++;
	}	
	return 0;
}

