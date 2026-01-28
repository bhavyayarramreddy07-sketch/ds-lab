#include<iostream>
using namespace std;
int main()
{
	int i=1,fact=1,n;
	cout<<"enter n value";
	cin>>n;
	if(n==0||n==1)
	cout<<fact;
	else 
	{
		for(i=1;i<=n;i++)
		fact=fact*i;
	}
	cout<<"factorial value is"<<fact;
	return 0;
}
