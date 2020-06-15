#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int low,high;
	while(scanf("%d%d",&low,&high)){
		
		for(int i=low;i<=high;i++){
			int number =i;
			int sum = 0;
			 while(number>0){
			 	int pii=number%10;
			 	sum+=pii*pii*pii;
			 	number/=10;
			 }
			 if(sum==i){
			 	cout<<sum<<endl;
			 }
		}
		
	}
}
