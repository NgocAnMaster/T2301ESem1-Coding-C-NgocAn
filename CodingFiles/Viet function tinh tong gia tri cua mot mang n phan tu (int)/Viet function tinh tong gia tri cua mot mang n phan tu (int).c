/**	
 *	Viet function tinh tong gia tri cua mot mang n phan tu (int)
 */
#include <stdio.h>
int tinhtonggt(int a[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}
int main(){
	int n,i;
	printf("Tinh tong gia tri cua mot mang n phan tu (int)\nNhap so phan tu n trong mang (toi thieu 1): ");
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri n ban vua nhap nho hon 1. Vui long nhap lai: ");
		}
	}while(n<1);
	int value[n];
	for(i=0;i<n;i++){
		printf("Nhap gia tri thu %d: ",i+1); scanf("%d",&value[i]);
	}
	int tong = tinhtonggt(value,n);
	printf("Tong phan tu ");
	for(i=0;i<n;i++){
		printf("%d ",value[i]);
		if(i<(n-1)){
			printf("+ ");
		}
	}
	printf("la: %d",tong);
}

