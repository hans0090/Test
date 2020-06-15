#include <iostream>
#include <map>
#include<sstream>
 
using namespace std;
 
int main()
{
	string s;
	map<string,int> student;
	map<string,int>::iterator it;
	it = student.begin();
	
	int n;
	while(cin>>n){
		student.clear();
		if(n==0)break;
				while(n--){
					cin>>s;
					student[s]++;
					if(s=="h")break;
				}
				int i=0;
				for(it=student.begin();it!=student.end();it++){ 
					if(i<it->second){
						i=it->second;
						s=it->first;
					}
				}
				char cc[30] ;
				stringstream ss(s);
				ss>>cc;
				cout<<cc<<endl; 
	}
	return 0;
}
