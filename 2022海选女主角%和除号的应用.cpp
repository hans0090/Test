	#include<stdio.h> 
	#include<iostream>
	#include<stdlib.h>
	using namespace std;
	int main(){ 
		int n,m;
		while(cin>>m>>n){
			int number=1;//��¼���ֵ�ǵڼ��� 
			int zuida=n*m;
			int max=0;//��¼���ֵ 
			int medium;
			for (int i=0;i<zuida;i++){
				cin>>medium;
				if(abs(medium)>abs(max)){
					max=medium;
					number=i+1;//�ǵڼ��� 
				}
			}
			cout<<(number-1)/n+1<<" ";
			if(number%n==0)cout<<n;
			else cout<<number%n;
			cout<<" "<<max<<endl;		
		}
	}
