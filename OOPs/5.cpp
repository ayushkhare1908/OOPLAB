#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i;
	for(i=0; s[i]!='\0'; i++);
	cout<<i;
}
