#include<stdio.h>
using namespace std;
typedef unsigned long long ll;
#define MAXN 51
ll fib[MAXN];
void initfib(int n,ll* fib){
	fib[0]=0;
	fib[1]=1;
	fib[2]=2;
	for(int i=3;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}
int main(){
	int n;
	initfib(MAXN,fib);
	while(scanf("%d",&n)!=EOF){
		printf("%lld\n",fib[n]);
	}
}
