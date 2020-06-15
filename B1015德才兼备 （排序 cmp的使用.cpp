#include<iostream>
#include<stdio.h>
#include<algorithm> 
using namespace std;
struct student{
	int number;
	int morality;
	int ability;
	int type;
};
bool cmp(student a,student b){
	int suma=a.ability+a.morality;
	int sumb=b.ability+b.morality;
	if(a.type!=b.type)return a.type>b.type;  			//如果种类不一样直接出结果 
	if(suma!=sumb) return suma>sumb;					//种类一样 ，但是总分不一样 
	if(suma==sumb) {
		if(a.morality!=b.morality)return a.morality>b.morality;
		return a.number<b.number;
	}
	//种类一样 总分一样 
}
int main(){
	int n,l,h;
	int num,abi,mor;
	cin>>n>>l>>h;
	student stu[10001];
	int m=0;
	for(int i=0;i<n;i++){
		cin>>num>>mor>>abi;
		if(mor>=l&&abi>=l){
		stu[m].ability=abi;
		stu[m].morality=mor;
		stu[m].number =num;
		if(mor>=h&&abi>=h)stu[m].type=5;
		else if(mor>=h)stu[m].type=4;
		else if(mor>abi)stu[m].type=3;
		else stu[m].type=2;
		m++;
		}
		
	}
	sort(stu,stu+m,cmp);
	
	
	cout<<m+1<<endl;
	for(int i=0;i<m;i++){
		cout<<stu[i].number<<" "<<stu[i].morality<<" "<<stu[i].ability<<endl;
	}
}
