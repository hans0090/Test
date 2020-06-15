#include<stdio.h>
#include<iostream>
using namespace std;



int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int charge;
		cin>>charge;
		int sheep=3;
		for(int i=0;i<charge;i++)
		{
			sheep = (sheep-1)*2;
		}
		cout<<sheep<<endl;
	}
 } 
