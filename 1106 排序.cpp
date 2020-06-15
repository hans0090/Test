#include<iostream> 
#include<stdio.h>
#include<string.h> 
using namespace std;

char temp[1009];

int todigit(char* str){
	int digit=0;
	for(int i = 0;str[i]!='\0';i++){
		digit*=10;
		digit+=str[i]-'0';
	}
	return digit;
//	cout<<digit<<endl;
}

int main(){
	while(cin.getline(temp,1002)){
		char* epi = strtok(temp,"5");
		int digits[1000];
		int count = 0;
		while(epi!=NULL){ //≥ı ºªØ 
			digits[count]=todigit(epi);
			count++;
			epi = strtok(NULL,"5");
		}
		
		
		for(int i = count;i>=0;i--){//≈≈–Ú 
			for(int j=0;j<i;j++){
				if(digits[j]>digits[j+1]){
					int c = digits[j];
					digits[j]=digits[j+1];
					digits[j+1]=c;
				}
			}
		}
		
		for(int i = 0;i<count;i++){
			cout<<digits[i]<<' ';
		}
		
		cout<<endl;
		
	}
	
}
