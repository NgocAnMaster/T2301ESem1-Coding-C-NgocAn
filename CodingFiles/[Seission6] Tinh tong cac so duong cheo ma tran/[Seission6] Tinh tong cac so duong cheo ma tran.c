/*	[Session 6, Array]
 *	Nhap vao ma tran 2 chieu vuong arr[3][3]
 *	Tinh tong cac so tren duong cheo chinh
 */

#include <stdio.h>
int main(){
	// Khai bao du lieu
	int arr[3][3];
	int i,j;
	// Nhap ma tran vuong
	printf("Nhap vao ma tran 2 chieu vuong arr[3][3], tinh tong cac so tren duong cheo chinh\nNhap gia tri cua:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Hang %d, cot %d: ",i+1,j+1); scanf("%d",&arr[i][j]);
		}
	}
	// Xem ma tran
	printf("Ma tran cua ban:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	// Tinh tong cac so tren duong cheo ma tran
	int tong=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				tong+=arr[i][j];
			}
		}
	}
	printf("Tong cac so tren duong cheo cua ma tran nay la: %d",tong);
}
