#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	while(number--){
		int n,t,k;
		cin>>n>>t>>k;
			//��ʼ�� �����еĲ������洢���� 
			int array[n];
			for(int i=0;i<n;i++){
				cin>>array[i];
			}
			//���ƶ� 
			int newarray[n];
			for(int i=0;i<n;i++){
				newarray[i]=array[(i-t+n)%n];
			}
			//������
			while(t--){
				for(int i=0;i<n;i++){
					newarray[i]*=k;
				}
			}
			//�����
			 for(int i=0;i<n;i++){
			 	cout<<newarray[i];
			 	if(i!=n-1)cout<<" ";
			 	else cout<<endl;
			 }
		
	}
}
