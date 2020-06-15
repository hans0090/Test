#include<stdio.h> 
#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip> 
using namespace std;
double area(double X,double Y,double X1,double Y1,double X2,double Y2);
double MPointX(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4);
double MPointY(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4);
double perimeter(double X,double Y,double X1,double Y1,double X2,double Y2);


int main()
{
	double X1,Y1,X2,Y2,X3,Y3,X4,Y4;
	double areas[4],peris[4];
	while(cin>>X1>>Y1>>X2>>Y2>>X3>>Y3>>X4>>Y4&&!((X1==X2)&&(X1==X3)&&(X1==X4)&&(X1==Y1)&&(Y1==Y2)&&(Y2==Y3)&&(Y3==Y4)&&(Y4==0))){


	double X = MPointX(X1,Y1,X2,Y2,X3,Y3,X4,Y4);
	double Y = MPointY(X1,Y1,X2,Y2,X3,Y3,X4,Y4);
		areas[0]=area(X,Y,X1,Y1,X2,Y2);
		areas[1]=area(X,Y,X2,Y2,X3,Y3);
		areas[2]=area(X,Y,X3,Y3,X4,Y4);
		areas[3]=area(X,Y,X4,Y4,X1,Y1); 
		peris[0]=perimeter(X,Y,X1,Y1,X2,Y2);
		peris[1]=perimeter(X,Y,X2,Y2,X3,Y3);
		peris[2]=perimeter(X,Y,X3,Y3,X4,Y4);
		peris[3]=perimeter(X,Y,X4,Y4,X1,Y1);
		for(int i=1;i<4;i++){
			for(int j=0;j<i;j++){
				if(peris[j]<peris[j+1]){
					double md=peris[j];
					peris[j]=peris[j+1];
					peris[j+1]=md;
					double mf=areas[j];
					areas[j]=areas[j+1];
					areas[j+1]=mf;
				}
			}
		} 

		for(int i=1;i<4;i++){
			for(int j=0;j<i;j++){
				if(areas[j]<areas[j+1]&&fabs(areas[j]-areas[j+1])>0.0005){
					double mgg=peris[j];
					peris[j]=peris[j+1];
					peris[j+1]=mgg;
					double mgd=areas[j];
					areas[j]=areas[j+1];
					areas[j+1]=mgd;
				}
			}
		}

		//输出结果 
		for(int i=0;i<3;i++)
		{	
			cout<<setiosflags(ios::fixed)<<setprecision(3)<<areas[i]<<" "<<setprecision(3)<<peris[i]<<" ";
		}
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<areas[3]<<" "<<setprecision(3)<<peris[3]<<endl;
		 
	}
}

double MPointX(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4){//生成角平分线x轴坐标 
	if(X1==X3)return X1;
	if(X2==X4)return X2;
	double K1=(Y1-Y3)/(X1-X3); 
	double K2=(Y2-Y4)/(X2-X4);
	return (X1*K1-X2*K2-Y1+Y2)/(K1-K2);
}

double MPointY(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4){//生成角平分线y轴坐标 
	if(Y1==Y3)return Y3;
	if(Y2==Y4)return Y4;
	if(X2==X4)return (X1-X2)*(Y1-Y3)/(X1-X3)+Y1;
	if(X1==X3)return (Y2-Y4)*(X2-X1)/(X2-X4)+Y2;
	double K1=(Y1-Y3)/(X1-X3);
	double K2=(Y2-Y4)/(X2-X4);
	return (X1-X2-Y1/K1+Y2/K2)/(1/K2-1/K1);
}


double area(double X,double Y,double X1,double Y1,double X2,double Y2)//计算边对应area的面积 
{
	double A=(Y2-Y1);
	double B=(X1-X2);
	double C=Y1*(X2-X1)-(Y2-Y1)*X1;
	return fabs(A*X+B*Y+C)/sqrt(A*A+B*B)*sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2))/2;
	
}


double perimeter(double X,double Y,double X1,double Y1,double X2,double Y2)//计算边对应的周长 
{
	return pow(pow(X1-X2,2)+pow(Y1-Y2,2),0.5)+ pow(pow(X1-X,2)+pow(Y1-Y,2),0.5)+pow(pow(X-X2,2)+pow(Y-Y2,2),0.5) ; 
}
