#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	double a,b,c,d;
	printf("nhap a,b,c,d:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a)
	{d=b*b-4*a*c;
	if (d<0)printf("Vo nghiem!");
	if (d==0)printf("Nghiem kep x=%.2lf",-0.5*b/a);		
	if (d>0)
	{printf("Hai nghiem phan biet:\n");
	printf("x1=%.2lf",0.5*(-b-sqrt(d))/a);
	printf("x2=%.2lf",0.5*(-b+sqrt(d))/a);	
	}
    }else if (b) printf("Mot nghiem x=%.2lf",-c/b);
    else if (c) printf ("Vo nghiem!");
    else printf ("Vo so nghiem!");
    return 0;	
 
}
