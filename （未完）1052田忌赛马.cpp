#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;//n是用例比赛次数 
	while(cin>>n&&n!=0){
		int tian[n];
		int king[n];
	//
		for(int i=0;i<n;i++)
			{
				cin>>tian[i];
			}
		for(int i=0;i<n;i++)
			{
				cin>>king[i];
			}
	// 
	bool *win = new bool[n]();
	int ping = 0;
	for(int i=0;i<n;i++)
	{
	int loc=-1;
	int cur=0;
	int j=0;
		for(;j<n;j++)
		{
			if(tian[i]>king[j]&&king[j]>cur&&!win[j])
			{
				loc=j;
				cur=king[j];
			}
		}
	if(loc!=-1)win[--j]=true;
	else
		for(int i=0;i<n;i++)
	{
		
	}

	}
	int prize;
	
	
	}
}
