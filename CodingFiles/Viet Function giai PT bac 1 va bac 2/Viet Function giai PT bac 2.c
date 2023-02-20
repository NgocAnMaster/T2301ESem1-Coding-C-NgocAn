/**	
 *	Viet Function giai PT bac 2
 */
 #include <stdio.h>
 #include <math.h>
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
// Ham giai PT bac 2
int giaiPTbac2(float a,float b,float c){
	float x,x1,x2; // lay bien x de xet nghiem
	if(a==0){
		giaiPTbac1(b,c); // goi ham giai PT bac 1
	}else{
		float dlta=b*b-4*a*c; // delta = b2-4ac
		if(dlta<0){
			printf("Phuong trinh vo nghiem");
		}else if(dlta==0){
			x=(-b/(2*a));
			printf("Phuong trinh co nghiem kep x=%f",x);
		}else{
			x1=(-b+sqrt(dlta))/(2*a);
			x2=(-b-sqrt(dlta))/(2*a);
			printf("Phuong trinh co hai nghiem phan biet x1=%f, x2=%f",x1,x2);
		}
	}
}

int main(){
	float a,b,c;
	printf("Phuong trinh bac 2 ax2+bx+c=0\nNhap gia tri cua a: "); scanf("%f",&a);
	printf("Nhap gia tri cua b: "); scanf("%f",&b);
	printf("Nhap gia tri cua c: "); scanf("%f",&c);
	printf("Phuong trinh cua ban: %fx2+%fx+%f=0\n",a,b,c);
	giaiPTbac2(a,b,c);
	return 0;
}
