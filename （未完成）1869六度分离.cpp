#include<iostream> 
using std::cin;
using std::endl;
using std::cout;
int find(int element,int *parent){//���ظýڵ�ĸ��ڵ� 
	while(parent[element]!=0){
	element=parent[element];
	}
	return element;
}
int main(){
	int s,n;//s�����ϵ��Ŀ��n���� ���� 
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

