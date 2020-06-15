#include<iostream> 
#include<map>
#include<string> 
using namespace std;

int main(){
	map<string,int> m;
	m["zero"]=0;
	m["one"]=1;
	m["two"]=2;
	m["three"]=3;
	m["four"] =4;
	m["five"]=5;
	m["six"]=6;
	m["seven"]=7;
	m["eight"]=8;
	m["nine"]=9;
	string a ,b;
	while(1){
		int diga=0;
		int digb=0;
		while(cin>>a){
			if(a=="+")break;
			diga*=10;
			diga+=m[a];
		}
		while(cin>>b){
			if(b=="=")break;
			digb*=10;
			digb+=m[b];
		}
		if(diga==0&&digb==0)break;
		cout<<diga+digb<<endl;
	}
}
