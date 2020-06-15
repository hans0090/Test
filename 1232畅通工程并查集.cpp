#include<stdio.h> 
#include<iostream>
using namespace std;
const int N=1000;
int set[N],coun;
void ufinit(int n){
	for(int i=0;i<=n;i++){
		set[i]=i;
	}
	coun =n;
}
int find(int a){//可以修改 
	return a==set[a]?a:find(set[a]);
}
void combine(int a,int b){
	a =find(a);
b=find(b);
if(a!=b){
	set[a]=b;//并查集中，必须让一个变成另一个的父亲 
	coun--;
}
//	if(find(a)!=find(b)){
//	set[a]=set[b];
//	count--;
//	}
}

int main(){
	 int n,m;
		while(cin>>n&&n!=0){
		ufinit(n);
		cin>>m;
		int a,b;
			while(m--){
			cin>>a>>b;
			combine(a,b);
		}
		cout<<coun-1<<endl;
	}
}
