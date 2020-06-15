
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class Ubigdata{
	private:
		string num;//һ��˽�б��� 
	public:
		Ubigdata();
		Ubigdata( int n);
		void setNumber(string s);
		const string& getNumber();
		Ubigdata operator+(Ubigdata b);//���������ʲô��˼ 
	private:
		string add(string n1,string n2);
		Ubigdata& operator[](int n);//��������ز�һ������ 
		};
		
Ubigdata::Ubigdata(){//��ʼ�� Ĭ��Ϊ0 
	num = "0"; 
}
Ubigdata::Ubigdata(int a){//��ʼ�� Ĭ��ֵ��int���� 
	stringstream ss;
	string s;
	ss<<a;
	ss>>s;
	setNumber(s);
}
void Ubigdata::setNumber(string s){//ֱ�Ӹ�������һ��ֵ 
	num=s;
}
const string& Ubigdata::getNumber(){//ֱ�ӻ�ȡ�����ֵ 
	return num;
}
Ubigdata Ubigdata::operator+(Ubigdata b){//������� 
	Ubigdata result;
	result.setNumber(add(getNumber(),b.getNumber()));
	return result;
}
Ubigdata& Ubigdata::operator[](int n){//��������飬����ֵ��һ��ubigdata���ָ�� 
	return *(this+(n*sizeof(Ubigdata)));//����ǿ�����ú�������ռ䣬ϵͳ��������� 
}

string Ubigdata::add(string n1,string n2){
	string number = (n1.length()>n2.length())?n1:n2;
	int diff = abs( (int) (n1.size() - n2.size()) );
	if(n1.size()>n2.size())n2.insert(0,diff,'0');
	else n1.insert(0,diff,'0');	
	    char carry = 0;
	    for(int i=n1.size()-1;i>=0;--i){
	    		//�Ӽ� 
	    	number[i]=(carry+(n1[i]-'0')+(n2[i]-'0')) + '0';
			//(carry+n1[i]+n2[i]-'0');
	    		//��λ
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
