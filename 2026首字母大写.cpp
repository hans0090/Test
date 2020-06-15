#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
//¼õÈ¥32Îª´óĞ´×ÖÄ¸ 
	 char str[200];
	 while(cin.getline(str,200)){
	 	str[0]-=32;
	 	for(int i=0;str[i]!='\0';i++){
	 		if(str[i]==' '&&str[i+1]<='z'&&str[i+1]>='a')str[i+1]-=32;
		 }
		 printf("%s\n",str);
	 }
}
