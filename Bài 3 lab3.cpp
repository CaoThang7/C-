#include<stdio.h>
#include<conio.h>
int main(){
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
	return 0;
	
}
