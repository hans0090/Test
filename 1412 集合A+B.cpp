/*�����������ϣ�Ҫ��{A} + {B}.
ע:ͬһ�������в�����������ͬ��Ԫ��.
Input
ÿ���������ݷ�Ϊ����,��һ������������n,m(0<n,m<=10000),�ֱ��ʾ����A�ͼ���B��Ԫ�ظ���.�����зֱ��ʾ��
��A�ͼ���B.ÿ��Ԫ��Ϊ������int��Χ������,ÿ��Ԫ��֮����һ���ո����.
Output
���ÿ���������һ������,��ʾ�ϲ���ļ���,Ҫ���С�������,ÿ��Ԫ��֮����һ���ո����.*/
#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int array[21000];
		for(int i=0;i<a+b;i++){
			cin>>array[i];
		}
		sort(array,array+(a+b));
		for(int i=0;i<a+b-1;i++){
			if(array[i]!=array[i+1])cout<<array[i]<<" ";
		}
		cout<<array[a+b-1]<<endl; 
	}
}
