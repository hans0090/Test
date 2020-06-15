#include<stdio.h>
#include<iostream>
#include<string.h>
#include<sstream>
#include <iomanip>

using namespace std;
int main(){
	int n=12;
	double sum=0;
	double receive ;
	while(n)
		{
			cin>>receive;
			sum+=receive;
			n--;
		}
		sum = sum/12;
		stringstream ss;
		ss<<setiosflags(ios::fixed)<<setprecision(2)<<sum;
		string amount = ss.str();
		cout<<'$'+amount<<endl;
}
