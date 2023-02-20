#include <stdio.h>
int main(){
	int a;
	float b;
	double c;
	char d;
	printf("Nhap vao gia tri a :\n");
	scanf("%d", &a);
	printf("Nhap vao gia tri cua b:\n");
	scanf("%f",&b);
	printf("Nhap vao gia tri cua c:\n");
	scanf("%lf",&c);
	getchar();
	printf("Nhap vao ky tu d:\n");
	scanf("%c",&d);
	printf("Gia tri cua a : %d\n",  a);
	printf("Gia tri cua b : %015f\n",  b);
	printf("Gia tri cua b : %-015f\n",  b);
	printf("Gia tri cua c : %018.7f\n",  c);
	printf("Gia tri cua c : %f\n",  c);
	printf("\tKy tu d : %c\n",  d);
	printf("Gia tri cua a: %d, Gia tri cua b : %f", a, b);
	return 0;
}
