#include<stdio.h> 
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct edge{
	int v1,v2,cost;
	bool operator<(const edge &m) const{
		return cost>m.cost;
	}
};

int set[105];



class UF{
	public:
		UF (){};

		int find(int x){
			if(x==set[x])return x;
			else return set[x]=find(set[x]);
		}

		int Union(int a,int b){
			int aa=find(a);
			int bb=find(b);
			if(aa!=bb){
				set[aa]=bb;
				return true;
			}else {
				return false;
			}
		}
		
		int reset(){
			for(int i=0;i<103;i++){
				set[i]=i;
			}
		}
};

int main(){
	
	int n,nmount;
	
	while(scanf("%d",&n)!=EOF&&n){
		nmount = n*(n-1)/2;
		priority_queue<edge> q;
		UF uf;
		uf.reset();
		
		while(nmount--){
			edge e;
			scanf("%d%d%d",&e.v1,&e.v2,&e.cost);
			q.push(e);
		}
		
		int ans=0,count = 0;
		while(!q.empty()){
			edge e=q.top();
			q.pop();

			if(uf.Union(e.v1,e.v2)){
				count++;
				ans+=e.cost;
			}

			if(count==n-1) break;
		}

		printf("%d\n",ans);
	}
	
}
