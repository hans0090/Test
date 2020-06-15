#include<stdio.h>
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
	int n;
	string co;
	while(cin>>n)
		{
			
					getchar();
			if(n==0)break;
		string color[1100];
		int *number = new int[n]();
			for(int i=0;i<n;i++)
				{
					char str[20];
					cin.getline(str,20);
					co=str;
					color[i]=co;
					
					for(int j=0;j<n;j++)
						{
							if(co==color[j])number[j]++;
						}
				}
				int big=0;
				for(int i=0;i<n;i++){
					if(number[i]>number[big])big=i;
				}
				char cccc[20];
				stringstream ss(color[big]);
				ss>>cccc;
				cout<<cccc<<endl;
		}
} 
/*Problem Description
Contest time again! How excited it is to see balloons floating around. But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.

This year, they decide to leave this lovely job to you. 
 

Input
Input contains multiple test cases. Each test case starts with a number N (0 < N <= 1000) -- the total number of balloons distributed. The next N lines contain one color each. The color of a balloon is a string of up to 15 lower-case letters.

A test case with N = 0 terminates the input and this test case is not to be processed.
 

Output
For each case, print the color of balloon for the most popular problem on a single line. It is guaranteed that there is a unique solution for each test case.*/
