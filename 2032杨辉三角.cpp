#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	int before[100];
	int row[100];
	while(cin>>n)
	{


		for(int i=0;i<n;i++)
		{
			//=========������============= 
			int rank = i/2+1;//ʵ����Ч�� Ԫ�� 
			row[0]=1;
			for(int j=1;j<rank;j++)
			{
				if(j<rank-1)
				{
				row[j]=before[j]+before[j-1];
				}
				else
				{
					if(i%2==0)//ż�� �� 
						{
							row[j]=2*before[j-1];
						}
					else//������ 
						{
							row[j]=before[j]+before[j-1];
						}
				}
			}
			//=========������============= 
			
			
			
			//=========��ӡһ��============= 
				
				for(int k =0;k<rank;k++)
				{
					if(k<rank)
					{
						cout<<row[k];
						if(k!=i)cout<<" ";
					}

				}
				
				if(i%2!=0){
					for(int m=rank-1;m>=0;m--)
					{
						cout<<row[m];
						if(m!=0)cout<<" ";
					}
				}else {
					for(int p=rank-2;p>=0;p--)
					{
						cout<<row[p];
						if(p!=0)cout<<" ";
					}
				}

					cout<<endl;
					
			//=========��ӡһ��============= 
			
			
			
			
			
			
			
			//=========������============= 
					for(int k=0;k<rank;k++)
					{
						before[k]=row[k];
					}
			//=========������============= 
		}
		cout<<endl;
	}
 } 
