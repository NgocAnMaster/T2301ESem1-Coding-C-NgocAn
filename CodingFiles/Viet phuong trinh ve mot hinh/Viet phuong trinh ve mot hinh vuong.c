#include <stdio.h>
int main(){
	int a,i,j;
	printf("Ve hinh vuong\nNhap so dong: ");
	do{
	scanf("%d",&a);
	if(a<=0)
		printf("Gia tri ban vua nhap nho hon hoac bang 0. Vui long nhap lai so dong: ");
	}while(a<=0);
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
