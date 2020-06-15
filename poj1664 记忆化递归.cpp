#include<stdio.h> 
#include<string.h>
#include<iostream>
using namespace std;
const int MAX=12; 
int a[MAX][MAX];
int apple(int m,int n){//m个苹果，n个盘子 
	if(a[m][n]){
		return a[m][n];
	}
	else {
		if(m==0||n==1)return a[m][n]=1;
		else{
			if(m<n) return a[m][m]=apple(m,m);
			else return a[m][n]=apple(m,n-1)+apple(m-n,n);
		}
	}
}

int main(){
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			a[i][j]=0;
		}
	}
	int j,m,n;
	cin>>j;
	while(j--){
		cin>>m>>n; 
		cout<<apple(m,n)<<endl;
	}
}
