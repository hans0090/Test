#include<iostream>
#include<stdio.h>
using namespace std;

int byloop(int a,int b){
	int c;
		do{
			c=a%b;
			if(c==0)
			return b;
			a=b;
			b=c;
		}while(c!=0);
}

int byrecursion(int a,int b){
	if(b ==0)return a;
	byrecursion(b,a%b);
}

int main(){
	cout<<byrecursion(42,7)<<endl;
	cout<<byloop(17,51)<<endl;

}
