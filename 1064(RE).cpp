#include<stdio.h> 
#include<iostream>
using namespace std;
char sentence[1005];
int main(){
	int n;
	cin>>n;
	getchar();
	while(n--){
		cin.getline(sentence,1005);
		int token=0;
		int head=0;
		int tail=0;
		while(sentence[token]!='\0'){
			while(sentence[tail]!='\0'&&sentence[tail]!=' '){//find the end of each word
				tail++; 
			}
			token = tail;
			tail--;
			while(head<tail){
				char c = sentence[tail];
				sentence[tail]=sentence[head];
				sentence[head]=c;
				head++;
				tail--;
			}
			head = token+1;
			tail = token+1;

		}
		cout<<sentence<<endl;
	}
}
