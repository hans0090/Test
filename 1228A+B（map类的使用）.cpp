#include<stdio.h> 
#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main(){
	map<string,int> m;
	const int plus=100;
	const int equal=200;
	m["zero"]=0;
	m["one"]=1;
	m["two"]=2;
	m["three"]=3;
	m["four"]=4;
	m["five"]=5;
	m["six"]=6;
	m["seven"]=7;
	m["eight"]=8;
	m["night"]=9;
	m["="]=equal;
	m["+"]=plus;
	
//	for(int i=0;i<10;i++){
//		cout<<m["night"]<<" ";
//	}
	while(true){
		int a=0;
		string s;
		while(cin>>s){
			if(m[s]==plus)break;
			a=a*10+m[s];
		}
		int b=0;
		while(cin>>s){
			if(m[s]==equal)break;
			b=b*10+m[s];
	}
	if(a==0 && b==0)break;
	else cout<<a+b<<endl;
	}
}
