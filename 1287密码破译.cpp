#include<stdio.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	int n;
	int text[1000];
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>text[i];
		}
		int i='A';
		for(;i<='Z';i++){
			int j=0;
			for(;j<n;j++){
				if(!((text[j]^i)>='A'&&(text[j]^i)<='Z'))break;
//				if(!isupper(text[j]^i))break;
			}
			if(j==n)break;
		}
		for(int j=0;j<n;j++){
			char c=i^text[j];
			cout<<c;
		}
		cout<<endl;
	}
}
