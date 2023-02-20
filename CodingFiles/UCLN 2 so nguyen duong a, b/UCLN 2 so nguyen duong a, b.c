/*	Tim UCLN cua 2 so nguyen duong a, b		*/
#include <stdio.h>
#include <math.h>
int main(){
	int a,b,x;
	printf("Tim UCLN cua 2 so nguyen duong a, b");
	printf("\nNhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d",&b);
	if (a!=b){
		while(a!=b){
			if(a>b){
				a-=b;
				}else{
					b-=a;
				}
		}
		printf("UCLN cua a va b la: %d",a);
	}else{
		printf("UCLN cua a va b la: %d",a);
	}
	return 0;
}
