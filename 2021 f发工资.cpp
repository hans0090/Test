#include<iostream> 
#include<stdio.h>

using namespace std;

int main(){
	int n;
	int salary;
	
		int count=0;
	cin>>n;
	while(n--){
		cin>>salary;
		while(salary-100>=0){
			salary-=100;
			count++;
		}
		while(salary-50>=0){
			salary-=50;
			count++;
		}
		while(salary-10>=0){
			salary-=10;
			count++;
			
		}
		while(salary-5>=0){
			salary-=5;
			count++;
			
		}
		while(salary-2>=0){
			salary-=2;
			count++;
			
		}
		while(salary-1>=0){
			salary-=1;
			count++;
		}
	}
			cin>>n;
			cout<<count<<endl;
}
