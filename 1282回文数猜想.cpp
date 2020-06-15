#include<stdio.h>
#include<string>
#include<iostream> 
using namespace std;
bool isreverse(int a,int &r){//判断是不是回文数，同时用指针返回回文数  
	int c=a;
	while(a>0){
		r*=10;
		r+=(a%10);
		a/=10;
	}
	return c==r;
}
int main(){
	int b=0,a;
	int step[3000];
	int count=0;
	while(cin>>a){
		count =0; 
		b=0;
		while(!isreverse(a,b)){
			step[count]=a;
			count++;
			a+=b;
			b=0;
		}
			step[count++]=a;
		cout<<count-1<<endl;
		for(int i =0;i<count;i++){
			if(i<count-1)printf("%d--->",step[i]);
			else cout<<step[i]<<endl;
		}
		
	}
}	
