#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	while(number--){
		int n,t,k;
		cin>>n>>t>>k;
			//初始化 把所有的参数都存储起来 
			int array[n];
			for(int i=0;i<n;i++){
				cin>>array[i];
			}
			//先移动 
			int newarray[n];
			for(int i=0;i<n;i++){
				newarray[i]=array[(i-t+n)%n];
			}
			//再求幂
			while(t--){
				for(int i=0;i<n;i++){
					newarray[i]*=k;
				}
			}
			//再输出
			 for(int i=0;i<n;i++){
			 	cout<<newarray[i];
			 	if(i!=n-1)cout<<" ";
			 	else cout<<endl;
			 }
		
	}
}
