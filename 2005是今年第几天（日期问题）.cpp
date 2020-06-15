#include<iostream> 
#include<stdio.h>
using namespace std;
 
int main(){
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,days;
	int daysum[13]={0,0};//记录到这个月之等于加上几天
	for(int i=2;i<13;i++){
		for(int j=0;j<i-1;j++){
			daysum[i]+=months[j];
		}
	}
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
		days=daysum[month]+day+(int)((month>2)&&leapyear(year));//要强转bool为int 
		cout<<days<<endl;
	}
}
