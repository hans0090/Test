#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int p[10001] = {0};
int prime[1000]={0};
int num=0;
bool table(int maxsize){
	for(int i=2;i<maxsize;i++){
		if(p[i]==0){
			prime[num++]=i;
			for(int j=i+i;j<maxsize;j+=i){
				p[j] =1;
			}
		}
	}
}

bool isprime(int n){
	for(int i= 2;i<=(int)sqrt(1.0*n);i++){
		if(n%i==0)return 0;
	}
	return 1;
}

int main(){
	int m;
//	while(cin>>m){
//		if(isprime(m)){
//			cout<<"yes"<<endl;
//		}else cout<<"no"<<endl;
//	}
	table(1000);
	for(int i=0;i<30;i++){
		cout<<prime[i]<<" ";
	}
}
