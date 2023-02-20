/*	Slot 8 Assignment
 *	Nhap n so tu ban phim. Tim gia tri lon nhat, gia tri nho nhat trong day so vua nhap.
 */

#include <stdio.h>
int main(){
	printf("Nhap n so tu ban phim. Tim gia tri lon nhat, gia tri nho nhat trong day so vua nhap.\n");
	int n,num[100],i,min,max;	// Khai bao: so gia tri, cac so (max 1000), i, GTNN, GTLN
	// Nhap gia tri day so, tu 1 den 100 so, ngoai khoang do yeu cau nguoi dung nhap lai
	printf("Nhap so gia tri cua day so (tu 1 den 100 so): ");
	do{
	scanf("%d",&n);
	if((n<1)||(n>100)){
		printf("Gia tri khong hop le. Vui long nhap lai (tu 1 den 100 so): ");
	}
	}while((n<1)||(n>100));
	// Voi day so n gia tri, cho nguoi dung nhap tung gia tri mot
	for(i=0;i<n;i++){
		printf("Nhap gia tri cua so thu %d: ",i+1); scanf("%d",&num[i]);
	}
	// Hien thi day so nguoi dung nhap vao
	printf("Day so ban vua nhap: ");
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	// Xu ly du lieu, tim gia tri lon nhat va nho nhat
	min=num[0];
	max=num[0];
	for(i=0;i<n;i++){
		if(num[i]<min){
			min=num[i];
		}
		if(num[i]>max){
			max=num[i];
		}
	}
	// Tra ve ket qua
	printf("\nGia tri lon nhat cua day so la: %d",max);
	printf("\nGia tri nho nhat cua day so la: %d",min);
	// Ket thuc
	return 0;
}
