#include<stdio.h>
#include<string.h> 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	getchar();
	char str[1004];
	 while(num--)
	 	{
	 		cin.getline(str,1004);
	 		int len = strlen(str);
	 		int front=0;
	 		int rear=0;
	 		int record;
	 		char c;
	 		while(front<=len)
		 		{
		 			if(str[front]==' '||str[front]=='\0')
		 			{
		 				record=front-1;
		 				while(record>rear)
		 					{
		 						c=str[record];
		 						str[record]=str[rear];
		 						str[rear]=c; 
		 						record--;
		 						rear++;
							 }
							 rear=front+1;
					 }
					 front++;
				 }
				 cout<<str<<endl;
		 }
}
