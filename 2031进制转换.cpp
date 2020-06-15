#include<iostream> 
#include<math.h>
using namespace std;
char convert[15]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E'};
int main(){
	int a,b,c,d;
	while(cin>>b&&b!=0){
	cin>>d>>c;
//	bool negative=false;
	a=d+c;
//	if(a<0)negative=true; 
		int *digit = new int[100]();
		int n=0;
//		a=abs(a);
		if(a==0){
			digit[0]=0;
			n++;
		}
		while(a>0){
		digit[n]=a%b;
		a/=b;
		n++;
		}
//		if(negative)cout<<"-";
		for(int i=n-1;i>=0;i--){
			cout<<convert[digit[i]];
		}
		cout<<endl;
	}
}
