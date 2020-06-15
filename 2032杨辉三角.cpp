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
			//=========生成行============= 
			int rank = i/2+1;//实际有效的 元素 
			row[0]=1;
			for(int j=1;j<rank;j++)
			{
				if(j<rank-1)
				{
				row[j]=before[j]+before[j-1];
				}
				else
				{
					if(i%2==0)//偶数 行 
						{
							row[j]=2*before[j-1];
						}
					else//奇数行 
						{
							row[j]=before[j]+before[j-1];
						}
				}
			}
			//=========生成行============= 
			
			
			
			//=========打印一行============= 
				
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
					
			//=========打印一行============= 
			
			
			
			
			
			
			
			//=========复制行============= 
					for(int k=0;k<rank;k++)
					{
						before[k]=row[k];
					}
			//=========复制行============= 
		}
		cout<<endl;
	}
 } 
