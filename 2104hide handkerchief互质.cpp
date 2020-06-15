#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a,b,c;

	do{
			cin>>a>>b;
		
				do{
					c=a-a/b*b;
					a=b;
					b=c;
					
				}while(c);
			if(a==1)cout<<"YES"<<endl;else if(a!=-1) cout<<"POOR Haha"<<endl;
	}while(a!=-1&&b!=-1);
}
