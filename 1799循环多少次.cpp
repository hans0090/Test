#include<iostream> 
#include<stdio.h>

using namespace std;

const int MAX = 2003;
const int mod = 1007;

int c[MAX][MAX];


//genereating YangHui triangle
void yanghui(int n){
	//initialize array 
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++)c[i][j]=0;
	}
	for(int i=1;i<n;i++) 
	{
		for(int j=1;j<=i;j++){

			if(j==1||j==i)c[i][j]=1;
			else{
				c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
				}
		}
	}
}
int main(){
	int n,a,b; 
	yanghui(MAX);
	cin>>n;
	while(n--){
		cin>>a>>b;
		cout<<c[b+1][a+1]<<endl;	
	}
}
