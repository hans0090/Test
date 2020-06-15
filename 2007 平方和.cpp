#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a>b){
			int c=a;
			a=b;
			b=c;
		}
		int square,cube;
		square=0;
		cube=0;
		for(int i=a;i<=b;i++){
			if(i%2==0)square+=i*i;
			if(i%2==1)cube+=i*i*i;
		}
		printf("%d %d\n",square,cube);
	}
}
