#include<stdio.h>
#include<iostream>

using namespace std;

int primes[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89};

int main(){
	int num[26];
	int add[26];
while(1){
		for(int s=0;s<26;s++){
		num[s]=0;
		add[s]=0;
	}
	int digit;
	char sign='s';
int i=0;
	for(;sign!=' ';i++){
		scanf("%d%c",&digit,&sign);
		num[i]=digit;
	}
	int l=i;
	for(int c =0;c<l;c++){
		l--;
		int med = num[c];
		num[c]=num[l];
		num[l]=med;
	}

int j=0;
	for(;sign!='\n';j++){
		scanf("%d%c",&digit,&sign);
		add[j]=digit;
	}
	if(j==1&&digit==0&&i==1)break;
	int ll=j;
		for(int c =0;c<ll;c++){
		ll--;
		int med = add[c];
		add[c]=add[ll];
		add[ll]=med;
	}
	if(i>j)j=i;
	int k=0;
	for(;k<j;k++){
		num[k]+=add[k];
//		cout<<num[k]<<add[k];
		if(num[k]>=primes[k]){
			num[k]-=primes[k];
			num[k+1]++;
		}
	}
	if(num[k]!=0)k++;
	
	for(int iii=k-1;iii>=0;iii--)
	if(iii==k-1)cout<<num[iii];
	else cout<<","<<num[iii];
	cout<<endl;
}
}
