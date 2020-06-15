#include<iostream>
#include<string> 
#include<stdio.h>
#include<stack>
#include<iomanip>
using namespace std;
#define MAXN 80
bool isdigit(char c){
	return (c>='0'&&c<='9');
}
bool isplus(char c){
	char si[3]="+-";
	for(int i=0;i<3;i++){
		if(si[i]==c)return true;
	}
	return false;
}
bool plan(char c){
	char si[3]="*/";
	for(int i=0;i<3;i++){
		if(si[i]==c)return true;
	}
	return false;
}
int main(){
	double digit1,digit2;
	stack<double> digits;
	stack<char> chars;
	string equation;
	while(getline(cin,equation)&&equation!="0"){
		//一次执行,从前往后遍历，遇到数字
		for(int i =0;equation[i];i++){
			if(isdigit(equation[i])){
				digit1=0;
				while(isdigit(equation[i])){//把遍历过程中遇到的字符转化成数字 
					digit1*=10;
					digit1+=(equation[i]-'0');	
					i++;
				}
				i--;
				digits.push(digit1);
			}
			if(isplus(equation[i])){
				if(chars.empty())chars.push(equation[i]);
				else {
					digit2 =  digits.top();
					digits.pop();
					digit1 = digits.top();
					digits.pop();
					char ope = chars.top();
					chars.pop();
					chars.push(equation[i]);
					if(ope=='+')digits.push(digit1+digit2);
					else digits.push(digit1-digit2);
				}
			}
			if(plan(equation[i])){
				digit1=digits.top();
				digits.pop();
				char operatio = equation[i];
//				cout<<digit1<<endl;
				i+=2;
				digit2=0;
				while(isdigit(equation[i])){
					digit2=digit2*10+equation[i]-'0';
					i++;
				}
				i--;
				if(operatio =='*')digits.push(digit1*digit2);
				else digits.push(digit1/digit2);
//				cout<<digits.top()<<endl;

			}
		}
		while(!chars.empty()){
			char opera=chars.top();
			chars.pop();
			digit2=digits.top();
			digits.pop();
			digit1=digits.top();
			digits.pop();
			if(opera=='+')digits.push(digit1+digit2);
			else digits.push(digit1-digit2);
		}
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<digits.top()<<endl;
		digits.pop();
	}
} 
