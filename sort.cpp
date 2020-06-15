#include<iostream> 
#include<algorithm>
#include<stdio.h>
using namespace std;
//ÊÊÓÃÓÚc++ 
bool cmp(int a,int b){
	return a<b;
}

int main(){
	int a[10]={123,324,213,432,1231,321,444,444,332,41};
	sort(a,a+10,cmp);
	for(int i=0;i<10;i++){
		cout<<a[i]<<endl;
	}
}
