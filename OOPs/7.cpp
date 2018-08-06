#include<iostream>
using namespace std;
int main(void)
{
	string s,t;
	int count_t=0,count_s=0;
	int flag=0;
	
	cout<<"S= ";
	cin>>s;
	
	cout<<"T= ";
	cin>>t;
	
	for(int i=0;t[i]!=0;i++)
		count_t++;
	
	for(int i=0;s[i]!=0;i++)
		count_s++;
	
	int l=count_s-count_t;
	
	for(int i=l,j=0; i<count_s, j<count_t; i++,j++)
		if(t[j]==s[i])
			flag=1;
			
	cout<<flag<<endl;
}
