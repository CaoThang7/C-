#include<stdio.h>
#define PI 3.14
int main(){
	int r;
    double chuVI, dienTich;
	printf("xin moi nhap vao ban kinh:");
	scanf("%d",&r);
	double chuvi =r*PI*2;
	printf("chu vi la:%.2lf\n",chuvi);
    double dientich= PI*r*r;
	printf("dien tich la:%.2lf\n",dientich);
	return 0;
}
