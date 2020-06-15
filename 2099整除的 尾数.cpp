#include<iostream>
using namespace std;

int main(){
	int a,b,min;
	int MOD = 100;
	while(cin>>a>>b){
		if(a==0&&b==0){
			break;
		}
		a*=MOD;
		int j=0;
		for(int i=a;i<a+MOD;i++){
			if(i%b==0){				
			if(j!=0)printf(" ");
				j++;
				printf("%02d",i%MOD);
			}
		}
		cout<<endl;
	}
	return 0;
}
