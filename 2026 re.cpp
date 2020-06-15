#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
 	char str[106];
	while(cin.getline(str,106)){
       
		str[0]-=32;
		for(int i=0;str[i]!='\0';i++){
			if(str[i-1]==' ')str[i]-=32;
		}
		cout<<str<<endl;
	}
}
