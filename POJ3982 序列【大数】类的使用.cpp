
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class Ubigdata{
	private:
		string num;//一个私有变量 
	public:
		Ubigdata();
		Ubigdata( int n);
		void setNumber(string s);
		const string& getNumber();
		Ubigdata operator+(Ubigdata b);//运算符重载什么意思 
	private:
		string add(string n1,string n2);
		Ubigdata& operator[](int n);//运算符重载不一样？： 
		};
		
Ubigdata::Ubigdata(){//初始化 默认为0 
	num = "0"; 
}
Ubigdata::Ubigdata(int a){//初始化 默认值由int给出 
	stringstream ss;
	string s;
	ss<<a;
	ss>>s;
	setNumber(s);
}
void Ubigdata::setNumber(string s){//直接给定对象一个值 
	num=s;
}
const string& Ubigdata::getNumber(){//直接获取对象的值 
	return num;
}
Ubigdata Ubigdata::operator+(Ubigdata b){//对象相加 
	Ubigdata result;
	result.setNumber(add(getNumber(),b.getNumber()));
	return result;
}
Ubigdata& Ubigdata::operator[](int n){//对象的数组，返回值是一个ubigdata类的指针 
	return *(this+(n*sizeof(Ubigdata)));//这样强制征用后面的这块空间，系统不会崩溃吗？ 
}

string Ubigdata::add(string n1,string n2){
	string number = (n1.length()>n2.length())?n1:n2;
	int diff = abs( (int) (n1.size() - n2.size()) );
	if(n1.size()>n2.size())n2.insert(0,diff,'0');
	else n1.insert(0,diff,'0');	
	    char carry = 0;
	    for(int i=n1.size()-1;i>=0;--i){
	    		//加减 
	    	number[i]=(carry+(n1[i]-'0')+(n2[i]-'0')) + '0';
			//(carry+n1[i]+n2[i]-'0');
	    		//进位
	    	if(i!=0){
	    		if(number[i]>'9'){
	    			number[i]-=10;
	    			carry=1;
				}else carry=0;
			}
		}
	if(number[0]>'9'){
		number[0]-=10;
		number.insert(0,1,'1');
	}
	return number;
}
int main(){
	Ubigdata da[100];
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		da[0]=a;
		da[1]=b;
		da[2]=c;
		for(int i=3;i<=99;i++){
			da[i]=da[i-1]+da[i-2]+da[i-3];
		}
		cout<<da[99].getNumber()<<endl;
	}
	return 0;
}
