#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int f[103],cnt; 

int initi (int n){
	for(int i=0;i<=n;i++){
		f[i]=i;
	}
	cnt=n;
	return 0;
}

//���輸 ������¼���Ƿ�ӽ�ȥ�� 
 int find(int a){
 	return a==f[a]?a:f[a]=find(f[a]);
 }

bool Union(int a,int b){
	a = find(a);
	b = find(b);
	if(a!=b){
		f[a]=b;
		cnt--;
		return true;
	}
	return false;
}

struct edge{
	int src,dest,cost;
	bool operator < (const edge& n) const{
		return cost>n.cost;
	}
};

int main(){
	edge e;
	int n,m;
	while (scanf("%d%d",&n,&m)!=EOF&&n){//n��Ϊ�� ѭ������ 
		priority_queue<edge> q;  
		initi(m) ;
		while(n--){
			scanf("%d%d%d",&e.src,&e.dest,&e.cost); 
			q.push(e);
		}
		
		int ans =0;
		int count = 0;
		
		while(!q.empty()){
			e=q.top();
			q.pop();
			if(Union(e.src,e.dest)){
				ans+=e.cost;
				count++; 
			}
			if(count==m-1)break;
		}
		    // ��������� 
//		    printf("%d",cnt);
        if(cnt == 1)
            printf("%d\n", ans);
        else
            printf("?\n");
	}
}
