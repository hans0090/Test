#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char box[1000];
	while(cin>>box){
		int yuren=0;
		for(int i=0;box[i]!='B';i++){
			if(box[i]=='(')yuren++;
			else yuren--;
		}
	cout<<yuren<<endl;
	}
} 
