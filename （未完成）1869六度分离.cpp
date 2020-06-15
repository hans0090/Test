#include<iostream> 
using std::cin;
using std::endl;
using std::cout;
int find(int element,int *parent){//返回该节点的父节点 
	while(parent[element]!=0){
	element=parent[element];
	}
	return element;
}
int main(){
	int s,n;//s代表关系数目，n代表 人数 
	int a ,b;
	cin>>n>>s;
	int *parent = new int[n+1]();
	while(cin>>a>>b&&s>0){
		parent[a]=b;
		s--;
	}
	bool is = 1;
	for(int i=1;i<=n;i++){
		if(find(i,parent)!=find(1,parent))is=0;
	}
	if(is==0)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}

