	#include<stdio.h> 
	#include<iostream>
	#include<stdlib.h>
	using namespace std;
	int main(){ 
		int n,m;
		while(cin>>m>>n){
			int number=1;//记录最大值是第几个 
			int zuida=n*m;
			int max=0;//记录最大值 
			int medium;
			for (int i=0;i<zuida;i++){
				cin>>medium;
				if(abs(medium)>abs(max)){
					max=medium;
					number=i+1;//是第几个 
				}
			}
			cout<<(number-1)/n+1<<" ";
			if(number%n==0)cout<<n;
			else cout<<number%n;
			cout<<" "<<max<<endl;		
		}
	}
