#include<stdio.h> 
#include <math.h>
#include<iostream>
using namespace std;
#define MAXN 1000000

	int ans[MAXN+2]={0,0,1};


	int isprime(int n){
		if(n==1)return 0;
		if(n==2)return 1;
		if((n&1)==0)return 0;
		
		int end = sqrt(n),i;
		for(i = 3;i<=end;i+=2){
			if(n%i==0)break;
		}
		
		return i>end?1:0;
	}
	
	int  digitsum(int digit) {
		int a=0 ;
		while(digit>0){
			a+=digit%10;
			digit/=10;
		}
		return a;
	}
	 
	int main(){
		int sum = 0,a,b,s;
		for(int i =2;i<MAXN+2;i++){
			if(isprime(i)&&isprime(digitsum(i))){

				sum++;
			}
				ans[i]=sum;
		}
		cin>>s;
		int i=1;
		while(i<=s){
			cin>>a>>b;
			cout<<"Case #"<<i<<": "<<ans[b]-ans[a-1]<<endl;
			i++;
		}
	}
