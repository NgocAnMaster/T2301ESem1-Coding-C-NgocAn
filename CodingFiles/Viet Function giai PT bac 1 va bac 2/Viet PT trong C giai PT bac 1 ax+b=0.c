/* Viet CT trong C giai PT bac 1 ax+b=0 /
/  a, b ng dung nhap tu ban phim       */
#include <stdio.h>
#include <math.h>
int main(){
	int a, b, x;
	printf("ax+b=0\n");
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	if (a==0){
		if (b==0){
			printf("Phuong trinh co vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x=-b/a;
		printf("Phuong trinh co nghiem x=%d",x);
	}
}
