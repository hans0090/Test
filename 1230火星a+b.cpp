#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 26
void reverse(int *array,int n){
	for(int i=0;i<n/2;i++){
		int temp=array[i];
		array[i]=array[n-i-1];
		array[n-i-1]=temp;
	}
}
int main(){
	int primes[MAX]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
	while(true){
//install
	int *diga=new int[MAX]();
	int *digb = new int[MAX]();
	int *sum = new int[MAX]();
	int i;
	char c; 
	for(i=0;i<MAX;i++){
		scanf("%d%c",&diga[i],&c);
		if(c==' ')break;
	}
	int j;
	for(j=0;j<MAX;j++){
		scanf("%d%c",&digb[j],&c);
		if(c=='\n')break;
	}
	i++;
	j++;
	reverse(diga,i);
	reverse(digb,j);
//install
//判断循环结束
	if((diga[0]==0&&i==1)||(digb[0]==0&&j==1))break; 
//相加
 	int k;
 	bool carry=false;
 	for(k=0;k<j||k<i||carry;k++){
 		if(carry){
	diga[k]++;
	carry=false;
}
 		if((diga[k]+digb[k])/primes[k])carry=1;
		sum[k]=(diga[k]+digb[k])%primes[k];
//		cout<<sum[k]<<"="<<diga[k]<<"+"<<digb[k]<<endl;
	}
	reverse(sum,k);
	for(int md=0;md<k;md++){
		printf("%d",sum[md]);
		if(md!=k-1)printf(",");
		else printf("\n");
	}
	}
}
