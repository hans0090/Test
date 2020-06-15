/*给你两个集合，要求{A} + {B}.
注:同一个集合中不会有两个相同的元素.
Input
每组输入数据分为三行,第一行有两个数字n,m(0<n,m<=10000),分别表示集合A和集合B的元素个数.后两行分别表示集
合A和集合B.每个元素为不超出int范围的整数,每个元素之间有一个空格隔开.
Output
针对每组数据输出一行数据,表示合并后的集合,要求从小到大输出,每个元素之间有一个空格隔开.*/
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
