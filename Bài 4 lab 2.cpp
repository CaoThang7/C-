#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("xin moi nhap diem Toan:");
	scanf("%d",&a);
	printf("xin moi nhap diem Ly:");
	scanf("%d",&b);
	printf("xin moi nhap diem Hoa:");
	scanf("%d",&c);
	double diemTrungBinh= ((a*3)+(b*2)+(c*1))/6;
	printf("diem trung binh la:%.2lf",diemTrungBinh);
	return 0;

}
