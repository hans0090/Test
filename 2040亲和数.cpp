#include<stdio.h>
#include<iostream>
using namespace std;



int main()
{
	int n;
	cin>>n;
	while(n--) 
	{
		int a,b;
		cin>>a>>b;
		int suma=0;
		int sumb=0;
		
		for(int i =1;i<=a/2;i++) 
		{
			if(a==a/i*i)suma+=i;
		}
			
		for(int i =1;i<=b/2;i++) 
		{
			if(b==b/i*i)sumb+=i;
		}
		
		if(suma==b&&sumb==a)cout<<"YES"<<endl;
		else cout<<"NO"<<endl ;
		
	}
 } 
