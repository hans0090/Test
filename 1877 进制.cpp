#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    long long a,b,m;
    while(1){
        cin>>m;
        if(m==0)break;
        cin>>a>>b;
        a+=b;
        int i=0;
        int digit[100];
        while(a!=0){
            digit[i]=(a%m);
            a/=m;
            i++;
        }
        long long num=0;
        while(i--){
            num*=10;
            num+=digit[i];
        }
        cout<<num<<endl;
    }
}
