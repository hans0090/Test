#include<iostream>
#include<string.h>
using namespace std;
int todigit(char* str){
	int digit=0;
	bool negative =false;
	if(str[0]=='-'){
	negative=true;
	str[0]=',';
	}
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==',')continue;
		digit*=10;
		digit+=str[i]-'0';
//		cout<<str[i]-'0';
	}
	if(negative)digit*=-1;
	return digit;
}
int main(){
	char s1[18];
	char s2[18];
	while(scanf("%s %s",&s1,&s2)!=EOF){
		cout<<todigit(s1)+todigit(s2)<<endl;
	}
}
