#include<iostream>
#include<cstdio>
using namespace std;
struct student{
	int number;
	int C,M,E;
	float A;
	int c,m,e,a;
};
student stu[2009];
void sortc(int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(stu[i].C>stu[j].C){
				student m = stu[i];
				stu[i]=stu[j];
				stu[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++){
		stu[i].c=i+1;
	}
}
void sortm(int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(stu[i].M>stu[j].M){
				student m = stu[i];
				stu[i]=stu[j];
				stu[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++){
		stu[i].m=i+1;
	}
}
void sorte(int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(stu[i].E>stu[j].E){
				student m = stu[i];
				stu[i]=stu[j];
				stu[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++){
		stu[i].e=i+1;
	}
}

void sorta(int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(stu[i].A>stu[j].A){
				student m = stu[i];
				stu[i]=stu[j];
				stu[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++){
		stu[i].a=i+1;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>stu[i].number>>stu[i].C>>stu[i].M>>stu[i].E;
		stu[i].A=(stu[i].M+stu[i].C+stu[i].E)/3;
	}
	sorta(n);
	sortc(n);
	sortm(n);
	sorte(n);
	int num;
	for(int i=0;i<m;i++){
		cin>>num;
		bool search = false;
		for(int j=0;j<n;j++){
			if(num==stu[j].number){
				search = true;
				char best = 'E';
				int min=stu[j].e;
				if(stu[j].m<=min){
					min=stu[j].m;
					best='M';
				}
				if(stu[j].c<=min){
					min=stu[j].c;
					best='C';
				}
				if(stu[j].a<=min){
					min=stu[j].a;
					best='A';
				}
				cout<<min<<" "<<best<<endl;
				break;
			}
		}
		if(!search)cout<<"N/A"<<endl;
	}
}
