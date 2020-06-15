#include<math.h> 
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		int result=pow(2,m-1)+pow(2,m-2)*(m-1);
		cout<<result<<endl;
	}
} 
