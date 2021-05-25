#include<stdio.h>
main(){
	double chieuDai,chieuRong;
	printf("Xin moi nhap vao chieu dai:");
	scanf("%lf",&chieuDai);
	printf("Xin moi nhap vao chieu rong:");
	scanf("%lf",&chieuRong);
	double dienTich = chieuDai * chieuRong;
	printf("HCN co chieu dai:%.2lf, co chieu rong:%.2lf,dien tich=%.2lf", chieuDai,chieuRong,dienTich );
	double chuVi = (chieuDai+chieuRong)*2;
	printf("HCN co chieu dai:%.2lf,co chieu rong:%.2lf,chu vi=%.2lf", chieuDai,chieuRong,chuVi );
	return 0;
}
