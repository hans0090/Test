#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
struct person{
	char id[500];
	int start;
	int end;
} p[500]; 


int main()
{
	int n;
	cin>>n;
	while(n--){
		//³õÊ¼»¯ 
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			int sh,sm,ss,eh,em,es;
			scanf("%s %d:%d:%d",p[i].id,&sh,&sm,&ss);
			p[i].start=3600*sh+60*sm+ss;
			scanf("%d:%d:%d",&eh,&em,&es);
			p[i].end=3600*eh+60*em+es;
		}
		int first=99999999;
		int least=0;
		int f,l;
		for(int i=0;i<m;i++){
			if(p[i].end>least){
				least=p[i].end;
				l=i;
			}
			if(p[i].start<first){
				first=p[i].start;
				f=i;
			}
		}
		cout<<p[f].id<<" "<<p[l].id<<endl;
	}
 }
