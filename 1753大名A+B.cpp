#include<iostream> 
#include<string.h>
using namespace std;
 
char* adds(int i,int k,char* ahead,char* bhead){
		//头部加 
		char* head;
		int tr= 0;//多出的部分长度 -111311231231.1111111111 4112312332.34443233
		if(i>=k){//a长 
			int trans = i-k;
			for(;tr<trans;tr++){
				head[tr] = ahead[tr];
			}
			for(int pw=tr;pw<i;pw++){//多出来的部分 
				head[pw] = ahead[pw]+bhead[pw-trans]-'0';
			}
		}
		if(i<k){//b长 
			int trans = k-i;
			for(;tr<trans;tr++){
				head[tr]= bhead[tr];
			}
			for(int pw=tr;pw<k;pw++){
				head[pw] = bhead[pw]+ahead[pw-trans]-'0';
			}
		}
		
		for(int cc=0;cc<i||cc<k;cc++){
//			cout<<head[cc];
		}
//		cout<<endl;
	
//		cout<<i<<" "<<k<<endl;
	return head;
}
int charge(char* digit,int length){
	int c = 0;
	for(int i=length;i>=0;i--){
		if(c){
			digit[i]++;
			c=0;
		}
		if(digit[i]>'9'){
			digit[i]-=10;
			c=1;
		}
	}
	return c;
}
int main(){
	string a,b;
	char ahead[1000],bhead[1000];
	char atail[1000],btail[1000];
	while(cin>>a>>b) {
		int i=0;
		for(;a[i]!='.';i++){
			ahead[i]=a[i];
		}
		ahead[i]='\0';
		i++;
		int j=0;
		for(;a[j+i]!='\0';j++){
			atail[j]=a[i+j];
			}
			atail[j]='\0';
		int k=0;
		for(;b[k]!='.';k++){
			bhead[k]=b[k];
		}
		bhead[k]='\0';
		k++;
		int l=0;
		for(;b[k+l]!='\0';l++){
			btail[l] =b[l+k];
		}
		btail[l]='\0';
		i--;//i表示a的头部长度-1 
		k--;//k表示b的头部长度-1
		// j表示a的尾数-1
		// l表示b的尾数-1 
		char* head = adds(i,k,ahead,bhead);
		int ma= i>k?i:k;
		int chargehead = charge(head,ma);
		char tail[1000];
		int max = i>j?i:j;
			if(j<=l){//bchang
				for(int kk = 0;kk<=l;kk++){
						if(kk<j){
							tail[kk]=atail[kk]-'0';
						}
						else {
							tail[kk]=0;
						}
				}
				for(int kk=0;kk<l;kk++){
					tail[kk]+=btail[kk];
				}
				
			}
			if(j>l){
				for(int kk = 0;kk<=j;kk++){
						if(kk<l){
							tail[kk]=btail[kk]-'0';
						}
						else {
							tail[kk]=0;
						}
				}
				for(int kk=0;kk<j;kk++){
					tail[kk]+=atail[kk];
				}
				
			}
			if(chargehead)cout<<'1';
			head[ma]='\0';
			if(charge(tail,max))head[ma-1]++;
			
			tail[max]='\0';
			cout<<head<<'.'<<tail<<endl;
	}
}
