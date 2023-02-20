/**	
 *	Viet Function giai PT bac 1 ax+b=0 voi a, b nhap tu ban phim
 */
#include <stdio.h>
// Ham duoi day giai PT bac 1 do nguoi dung nhap
int giaiPTbac1(float m,float n){
	float x; // bien x
	if(m==0){
		if(n==0){
			printf("Phuong trinh co vo so nghiem"); // neu a=b=0, PT co vo so nghiem
		}
		else{
			printf("Phuong trinh vo nghiem"); // neu a=0, b!=0, PT vo nghiem
		}
	}
	else{
		x=(-n/m); // x co nghiem duy nhat
		printf("Phuong trinh co nghiem x=%f",x); // tra nghiem x ve ham main
	}
}

int main(){
	float a,b,x;
	printf("Phuong trinh bac 1 ax+b=0\nNhap gia tri cua a: "); scanf("%f",&a);
	printf("Nhap gia tri cua b: "); scanf("%f",&b);
	printf("Phuong trinh cua ban: %fx+%f=0\n",a,b);
	giaiPTbac1(a,b);
	return 0;
}
