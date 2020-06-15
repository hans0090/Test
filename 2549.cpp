#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	char line[1000];
	cin>>n;
	while(n--){
		cin>>line;
		int i=0;
		while(line[i]!='.'){
			i++;
		}//i表示小数点的数字 
		int k=0;//k表示小数点后有多少位  
		while(line[i+k]!='\0')k++;
//		cout<<k<<endl;
		int m;
		cin>>m;
		i+=m;
		if(k>m)printf("%c\n",line[i]);    
		else printf("0\n");
				cout<<k<<"----"<<i<<endl;
	}
}
