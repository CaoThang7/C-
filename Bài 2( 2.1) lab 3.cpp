#include<stdio.h>
#include<conio.h>
int main(){
	double a,b,x;
	printf("nhap a:");
	scanf("%lf",&a);
	printf("nhap b:");
	scanf("%lf",&b);
	if(a==0){
		//1: b==0
		//2: b!=0
		if(b==0){
			printf("phuong trinh vo so nghiem");
		}else{
			printf("phuong trinh vo nghiem");
		}
	}else{
		x= -b/a;
		printf("phuong trinh co nghiem x = %lf",x);
	}
	return 0;
}
