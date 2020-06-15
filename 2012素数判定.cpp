#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n);
/*Problem Description
���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ������
 

Input
���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������
 

Output
����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ�С�
 

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
