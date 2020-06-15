#include<stdio.h> 
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	char c ;
	while(n--){
		cin>>c;
		cin>>a>>b;
		switch(c)
			{
				case '+':
					{
						cout<<a+b<<endl;
						break;
					}
				case '-':
					{
						cout<<a-b<<endl;
						break;
					}
				case '*':
					{
						cout<<a*b<<endl;
						break;
					}
				case '/':
					{
						if(a/(b*1.0)==a/b)cout<<a/b<<endl;
						else cout<<setiosflags(ios::fixed)<<setprecision(2)<<a/(b*1.0)<<endl;
						break;
					}
			}
	}
}
