#include<stdio.h>
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	while(n--){
	string startid;
	string endid;
	int start=100000000;
	int end=0;
		cin>>m;
		while(m--){
			string name;
			cin>>name;
			int a,b,c;
			scanf("%d:%d:%d",&a,&b,&c);
			if(start>a*3600+b*60+c){
				start=a*3600+b*60+c;
				startid=name;
			}
			
			scanf("%d:%d:%d",&a,&b,&c);
			if(end<a*3600+b*60+c){
				end=a*3600+b*60+c;
				endid=name;
			}
		}
		char sta[100],en[100];
		
		stringstream ss(startid);
		ss>>sta;
		stringstream ee(endid);
		ee>>en;
		if(sta[1]=='A')break;//pi yi xia
		cout<<sta<<" "<<en<<endl;
	}
	
}
