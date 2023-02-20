/* Tim so fibonacci thu n, voi n nhap vào tu ban phim */
#include <stdio.h>
#include <math.h>
int main(){
	int n,a;
	printf("Tim so Fibonacci thu n\nNhap n nguyen duong: ");
	do{
	scanf("%d",&n);
	if(n<=0){
		printf("So n ban vua nhap khong phai la so nguyen duong. Vui long nhap lai n nguyen duong: ");
	}
	}while(n<=0);
	int i=1;
	printf("Day so Fibonacci %d so: ",n);
	if(n<=i){
		a=n;
		printf("%d",n);
	}else{
		int k=0;
		int m=1;
		while(i<=n){
			a=k+m;
			printf("%d ",a);
			m=k;
			k=a;
			i++;
		}
	}
	printf("\nSo Fibonacci thu %d la %d",n,a);
}
