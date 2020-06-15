#include<iostream>
#define MAX 100001
using namespace std;
int set[MAX];
class tree{
	private:
		int length;
	public:
		tree(int n){
			length=n;
			for(int i=0;i<=n;i++){
				set[i]=i;
			}
		}
		void uni(int x,int y){
			set[y]=x;
		}
		int getdistance(int x){
			int ans =0;
			while(x!=set[x]){
				x=set[x];
				ans++;
			}
			return ans;
		}
};
int main(){
	int n,m,a,b,d1,d2;
//			cout<<"yes";
//	while(scanf("&d&d",&n,&m)!= EOF && ( n || m ))
//	while(sca)
	while(scanf("%d%d",&n,&m) != EOF && (n || m)) 
	{
		

		tree t(n);
		for(int i=1;i<n;i++){
			scanf("%d%d",&a,&b);
			t.uni(a,b);
		}
		while(m--){
			scanf("%d%d",&a,&b);
			d1=t.getdistance(a);
			d2=t.getdistance(b);
			if(d2<d1)printf("pfz\n");
			else printf("lxh\n");
		}
	}
}
