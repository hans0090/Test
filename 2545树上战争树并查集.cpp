#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX 100001
	int set[MAX];
int heig(int a){
	if(set[a]==a)return 0;
	else return heig(set[a])+1;
}
int main(){
	int n,m;

	while(scanf("%d%d",&n,&m)!=EOF&&(n||m)){
		for(int i=0;i<n+1;i++){
			set[i]=i;
		}
		int a,b;
		for(int i=0;i<n-1;i++){
			scanf("%d%d",&a,&b);
			set[b]=a;
		}
		int x,y;
		for(int i=0;i<m;i++){
			scanf("%d%d",&x,&y);
			if(heig(y)<heig(x))
			cout<<"pfz"<<endl;
			else cout<<"lxh"<<endl;
		}
	}
}
