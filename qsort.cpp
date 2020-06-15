#include<iostream> 
#include<stdio.h>
#include<stdlib.h>
//ÊÊÓÃÓÚcÓïÑÔ 


using namespace std;

int cmp(const void *a,const void *b){
	int l = *((int*)a);
	int r = *((int*)b);
	if(l>r)return 1;
	else if (l==r)return 0;
	else if(l<r)return -1;
}

int main(){
	int array[12]={1,32,43,13,43,55,32,12,4,77,234,432};
	qsort(array,12,sizeof(array[0]),cmp);
	for(int i =0;i<12;i++){
		cout<<array[i]<<endl;
	}
}
