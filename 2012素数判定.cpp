#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n);
/*Problem Description
对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数。
 

Input
输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
 

Output
对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
 

Sample Input
0 1
0 0
 

Sample Output
OK*/
int main(){
	int a,b;
	do{
	cin>>a>>b;
	bool ok = true;
	
	for (int i =a;i<=b;i++)
	{
		if(!isprime(pow(i,2)+i+41))
		{
			ok = false;
			
			break;
		}
	}
	if(a!=0||b!=0){if(ok)cout<<"OK"<<endl;else cout<<"Sorry"<<endl;}
	
	}while(a!=0|| b!=0);
	
}

bool isprime(int n)
{
	bool is = true;
	if(n<2)return false;
	for(int i =2;i<=n/2;i++)
	{
		if(n/i*i==n)is = false;
	}
	return is;
 } 
