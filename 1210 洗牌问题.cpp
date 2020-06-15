#include<iostream>
#include<stdio.h>
using namespace std;
int digit[100100];
int d[100100];

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<=n*2;i++){
			digit[i]=i;
		}
		
		//	bool bloop  = 1;
	int result = 0;
	while(1){
			for(int i=1;i<=n;i++){
				d[2*i]=digit[i];
				d[2*i-1]=digit[n+i];
			}
			
			bool true1 = true;
			result++;
			for(int i=1;i<=2*n;i++){
//				cout<<d[i]<<" ";
				if(i!=d[i]){
					true1= false;
//					break;
				}
				digit[i]=d[i];
			}
//			cout<<endl;
			if(true1)break;
		}
		
		cout<<result<<endl;
	}

}
