#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int v[103];
class UF{
	public:
	UF(){	}

	int find(int x){
		if(x == v[x]) return x;
		else return v[x]=find(v[x]);//试下 如果改成return find(v[x])怎么样 
	}

	bool Union(int a,int b){
		int aa = find(a);
		int bb = find(b);
		if(aa!=bb){
			v[bb]=aa;
			return true;   
		} else{
			return false;
		}
	}

	int reset(){
		for(int i = 0 ;i<103;i++){
			v[i]=i;
		}
	}
	
	
};

struct edge{
	int e1,e2,cost,statue;
	
	bool operator <(const edge m)const{
		return cost >m.cost; 
	} 
};

int main(){
	int n;
				edge e;
	int e1,e2,cost,statue;
	UF uf;
	while(cin>>n){
		if(n==0)break;
		
	priority_queue<edge> q;
			uf.reset();
			int edgenumber = n*(n-1)/2;
		while(edgenumber--){

			scanf("%d%d%d%d", &e.e1, &e.e2, &e.cost, &statue);
			if(statue==1){
				uf.Union(e.e1,e.e2);
			}
			else{
				q.push(e);
			}
		}
		
		int count=0 ,ans=0;
		
		while(!q.empty()){
			e=q.top();
			q.pop();
			if(uf.Union(e.e1,e.e2)){
				count++;
				ans+=e.cost;
			}
			
			if(count==n-1)break;
		}
		
		printf("%d\n",ans);
	}
}
