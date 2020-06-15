/*思路 并查集在并入的时候。如果已经存在该元素，那么直接输入no
，在并入完成后如果只有一个并查集
如何判断有几个并查基呢，在合并的时候如果两个的祖先都是自己，那么并查集加一，如果两个的祖先只有一个是自己，不变
如果有两个的祖先不是自己，那么减去1*/
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
