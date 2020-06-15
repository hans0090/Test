#include<stdio.h> 
#include<string.h>
#include<iostream> 
using namespace std;
int main()
{
	char str[10000];
	int n,count;
	cin>>n;
	getchar();
	
	while(n--)
	{
		count=0;
		cin.getline(str,10000);
		for(int i =0;str[i]!='\0';i++)
		{
			if(str[i]<0)
			{
				count++;
				i++;
			}
		}
		cout<<count<<endl;
	}
} 
