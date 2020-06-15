#include<stdio.h>
using namespace std;
int main(){
	char grade[11] ={'E','E','E','E','E','E','D','C','B','A','A'};
	int a;
	while(scanf("%d",&a)!=EOF){
		if(a>100||a<0)printf("Score is error!\n");
		else printf("%c\n",grade[a/10]);
	}
}
