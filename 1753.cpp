#include<iostream> 
#include<string.h>
#include<stdio.h>
//12312.32
//	222.23333
using namespace std;

char* add(char* a,char* b){
	int alen=0;
	int blen=0;
	while(a[alen]!='.')alen++;
	while(b[blen]!='.')blen++;
	int i=1;
	for(;a[alen+i]!='\0'||b[blen+i]!='\0';i++){//ºó±ßÌí¼Ó0 
		if(!(a[alen+i]>='0'&&a[alen+i]<='9'))a[alen+i]='0';
		if(!(b[blen+i]>='0'&&b[blen+i]<='9'))b[blen+i]='0';
	}
	a[alen+i]='\0';
	b[blen+i]='\0';
	if(alen<blen){
		char* c;
		c=a;
		a=b;
		b=c;
		
		int te;
		te=alen;
		alen=blen;
		blen=te;
	}
	int diff=alen-blen;
	cout<<diff<<endl;
	for(int ii=0;ii<alen+i;ii++){
		a[ii+diff]=a[ii+diff]+b[ii]-'0';
		if(a[ii+diff]==',')a[ii+diff]='.';
	}
	
	cout<<a<<endl;
	
	
	int charge=0;
	for(int j=alen+i-1;j>=0;j--){//jin wei
	
			if(a[j]=='.'||a[j]=='\0')continue;
			
				if(charge){
					a[j]++;
					charge = 0;
				}
				if(!(a[j]<'9'&&a[j]>'0')){
					charge = 1;
					a[j]-=10;
				}
	}
	a[alen+i]='\0';
//	cout<<a<<endl<<b<<endl<<i<< endl;
cout<<a<<endl;
return a;
}

int main(){
	char a[1000];
	char b[1000];
	cin>>a>>b;
	add(a,b);
	}
