/*˼· ���鼯�ڲ����ʱ������Ѿ����ڸ�Ԫ�أ���ôֱ������no
���ڲ�����ɺ����ֻ��һ�����鼯
����ж��м���������أ��ںϲ���ʱ��������������ȶ����Լ�����ô���鼯��һ���������������ֻ��һ�����Լ�������
��������������Ȳ����Լ�����ô��ȥ1*/
#include<iostream>
#include<stdio.h>
#define MAX 100001
using namespace std;

int set[MAX]; 
int setcount=0;
bool istrue;
void initset(){
	for(int i=0;i<MAX;i++){
		set[i]=i;
	}
} 
int find(int a){
	return a==set[a]?a:find(set[a]);
}

void unix(int a,int b){
	int aa=find(a);
	int bb=find(b);
	if(aa==a&&bb==b)setcount++;
	if(aa!=a&&bb!=b)setcount--;
	if(aa==bb)istrue=false;
	if(aa!=bb)set[aa]=bb;
}

int main(){
	int a=-100;
	int b=-100;
	while(a!=-1||b!=-1){
		initset();
		setcount=0;
		istrue = true;
		while(cin>>a>>b&&a!=0){
			if(a==-1)break;
			unix(a,b);
		}
		if(a!=-1){
			if(setcount==1&&istrue)printf("Yes\n");
			else printf("No\n");
		}
	}
}
