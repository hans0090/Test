#include<stdio.h>
#include<sstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,p;
	string str;
	string pro;
	cin>>n;
	while(n)
	{
			cin>>str;
			pro = str.substr(0,2);
			stringstream sstr(pro);
			sstr>>p;
			switch(p)
		{
			case 33 : pro = "Zhejiang"; break;
			case 11 : pro = "Beijing"; break;
			case 71 : pro = "Taiwan"; break;
			case 81 : pro = "Hong Kong"; break;
			case 82 : pro = "Macao"; break;
			case 54 : pro = "Tibet"; break;
			case 21 : pro = "Liaoning"; break;
			case 31 : pro = "Shanghai"; break;
		}
		string year = str.substr(6, 4);
		string month = str.substr(10, 2);
		string days = str.substr(12, 2);
		
		cout << "He/She is from" <<  " " + pro << ",and his/her birthday is on"<< " " + month <<"," + days + ","<< year + " " <<"based on the table." << endl;
			n--;
	}
} 
