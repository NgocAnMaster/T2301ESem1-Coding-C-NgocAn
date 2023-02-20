/*	Viet CT trong C giai PT bac 2 ax2+bx+c=0		 /
/	Voi a, b, c nhap vào tu ban phim.  (So nguyen).	*/
#include <stdio.h>
#include <math.h>
/* int delta(int m, int n, int p, int delt){
	delt=n*n-4*m*p;
	if (delt<0)
		return 0;
	else if (delt==0)
		return 1;
	else return 2;
} */
int main(){
	float a,b,c,x,x1,x2,de;
	printf("ax2+bx+c=0\nNhap a: "); scanf("%f",&a);
	printf("Nhap b: "); scanf("%f",&b);
	printf("Nhap c: "); scanf("%f",&c);
	if (a==0){
		printf("Dang giai phuong trinh bx+c=0...\n");
		if (b==0){
			if (c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-c/b;
			printf("Phuong trinh co nghiem x=%f", x);
		}
	}else{
		float de=b*b-4*a*c;
		if (de<0){
			printf("Phuong trinh vo nghiem");
		}else if (de==0){
			x1=x2=(-b)/(2*a);
			printf("Phuong trinh co nghiem kep x1=x2=%f",x1);
		}else{
			x1=(-b+sqrt(de))/(2*a);
			x2=(-b-sqrt(de))/(2*a);
			printf("Phuong trinh co hai nghiem phan biet x1=%f, x2=%f",x1,x2);
		}
	}
	return 0;
}
