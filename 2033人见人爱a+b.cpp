#include<stdio.h>
#include<iostream>
#define MAX 3
#define carry 60
using namespace std;
int main(){
	int n;
	int sum[MAX];
	cin>>n;
	while(n--){
		for(int i=0;i<MAX;i++){
		cin>>sum[i];
		}
		for(int i=0;i<MAX;i++){
		int b;
		cin>>b;
		sum[i]+=b;
		}
		for(int i=MAX-1;i>0;i--){//½øÎ»
			if(sum[i]>=carry)sum[i-1]++;
			sum[i]%=60;
		}
		for(int i=0;i<MAX;i++){
			cout<<sum[i];
			if(i==MAX-1)cout<<endl;
			else cout<<" ";
		}
	}
}
