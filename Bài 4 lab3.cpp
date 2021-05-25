#include <stdio.h>
#include <conio.h>
void bai1lab3(){	
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
	
}
//----------------------
void bai2lab3(){
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

}
//----------------------
void bai3lab3(){
		double sokwhsudung,t;
	printf("nhap sokwhsudung:");
   	scanf("%lf",&sokwhsudung);
	if(sokwhsudung<=50){
		t=sokwhsudung*1.678;
   	printf("tien dien phai tra VND:%lf",t);
   }else if( (sokwhsudung>=51)&&(sokwhsudung<=100) ){
   	    t=sokwhsudung*1.734;
    printf("tien dien phai tra VND:%lf",t);
   }else if((sokwhsudung>=101)&&(sokwhsudung<=200)){
   	    t=sokwhsudung*2.014;
    printf("tien dien phai tra VND:%lf",t);
   }else if((sokwhsudung>=201)&&(sokwhsudung<=300)){
   	    t=sokwhsudung*2.536;
	printf("tien dien phai tra VND:%lf",t);	
   }else if((sokwhsudung>=301)&&(sokwhsudung<=400)){
	printf("tien dien phai tra VND:%lf",t);	
	    t=sokwhsudung*2.834;
   }else if(sokwhsudung>=401){
	printf("tien dien phai tra VND:%lf",t);	
        t=sokwhsudung*2.927;
   }

	
}
//----------------------
int main(){
	int chon;
	printf("-------- MENU ---------\n");
	printf("1,Xay dung chuong trinh tinh hoc luc \n");
	printf("2,Xay dung chuong trinh giai phuong trinh\n");
	printf("3, Xay dung chuong trinh tinh tien dien\n");
	printf("4, Exit\n");
	printf("Chon: ");
	scanf("%d", &chon);
	switch(chon){
		case 1: bai1lab3(); break;
		case 2: bai2lab3(); break;
		case 3: bai3lab3(); break;
	    default: printf("Over");
	}
}
