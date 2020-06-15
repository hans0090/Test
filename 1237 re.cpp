#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<iomanip>

using namespace std;

double todigit(char* digit){
	double num=0;
	for(int i=0;digit[i]<='9'&&digit[i]>='0';i++){
		num*=10;
		num+=digit[i]-'0';
	}
	return num;
}
bool isplus(char c){
	char p[3]="+-";
	for(int i=0;i<3;i++){
		if(p[i]==c)return true;
	}
	return false;
}

bool ismult(char c){
	char p[3]="*/";
	for(int i=0;i<3;i++){
		if(p[i]==c)return true;
	}
	return false;
}

int main(){
	char line [1000] ;
	while(cin.getline(line,1000)){
	if(line[0]=='0'&&line[1]=='\0')break;
	char* epi = strtok(line," ");
	double dig=todigit(epi);
	stack<double> q;
	q.push(dig);
	while(epi){
		epi = strtok(NULL," ");
		if(epi==NULL)break;
					 if(epi[0]=='+'){
					 	epi = strtok(NULL," ");
					 	dig=todigit(epi);
					 	q.push(dig);		
					 }
					 if(epi[0]=='-'){
					 	epi = strtok(NULL," ");
					 	dig=todigit(epi)*(-1);		
					 	q.push(dig);	
					 }
					 if(epi[0]=='*'){
					 	epi =strtok(NULL," ");
					 	dig=todigit(epi);
					 	dig*=q.top();		
					 	q.pop();
					 	q.push(dig);				
					 }
					if(epi[0]=='/'){
						epi =strtok(NULL," ");
							dig=todigit(epi);
							dig = q.top()/dig;
							q.pop();
							q.push(dig);
					}
		}
		dig=0;
		while(!q.empty()){
			dig+=q.top();
			q.pop();
		}
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<dig<<endl;
	}
}
