#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	char a[3];
	while(cin>>a[0]>>a[1]>>a[2]){
		sort(a,a+3);
		printf("%c %c %c\n",a[0],a[1],a[2]);
	}
}
