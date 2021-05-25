#include<stdio.h>
#include<conio.h>
int main(){
	double diemSinhVien;
	printf("xin moi nhap diem sinh vien:");
   	scanf("%lf",&diemSinhVien);
   	if((diemSinhVien>=0)&&(diemSinhVien<=10))
	if(diemSinhVien>=9){
   	printf("Hoc luc xuat sac");
   }else if( (diemSinhVien>=8)&&(diemSinhVien<9) ){
    printf("Hoc luc gioi");
   }else if((diemSinhVien>=6.5)&&(diemSinhVien<8)){
    printf("Hoc luc kha");
   }else if((diemSinhVien>=5)&&(diemSinhVien<6.5)){
	printf("Hoc luc trung binh");	
   }else if((diemSinhVien>=3.5)&&(diemSinhVien<5)){
	printf("Hoc luc yeu");	
   }else if(diemSinhVien<3.5){
	printf("Hoc luc kem");	
   }else //if((diemSinhVien>=0)&&(diemSinhVien<=10)) 
	printf("Nhap diem khong hop le");
	return 0;
}
