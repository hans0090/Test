#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a,b,k;
	while(cin>>a>>b>>k&&a!=0&&b!=0){
		bool ok = true;
		int aa=a;
		int bb=b;
		while(k--){
			if(aa%10!=bb%10)ok=false;
			aa/=10;
			bb/=10;
		}
		if(ok)cout<<-1<<endl;
		 else cout<<a+b<<endl;
	}
}
