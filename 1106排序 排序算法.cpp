#include<iostream>
using namespace std;

int main(){
	char str[1001];
	while(cin.getline(str,1001)){
		int array[1000];
		int j=0;
		for(int i=0;str[i]!='\0';i++){//±éÀúÕû´®×Ö·û 
			int number =0;
			bool notfive=0;
			while(str[i]!='5'){
				notfive=1;
				number*=10;
				number+=str[i]-'0';
				i++;
				if(str[i]=='\0')break;
			}
			if(notfive)array[j++]=number;
			if(str[i]=='\0')break;
		}
		for(int k=j-1;k>=0;k--){
			for(int m=0;m<k;m++){
				if(array[m]>array[m+1]){  
					int medium = array[m];
					array[m]=array[m+1];
					array[m+1]=medium;
				}
			}
		}
		for(int i=0;i<j;i++){
			cout<<array[i];
			if(i!=j-1)cout<<' ';
			else cout<<endl;
		}
		
	}
} 
