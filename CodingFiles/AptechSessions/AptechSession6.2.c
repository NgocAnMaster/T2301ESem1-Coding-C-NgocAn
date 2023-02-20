#include <stdio.h>
int main(){
	int arr[3][3];
	int i,j;
	for(i=0;i<3; i++){
		for(j=0; j<3; j++){
			printf("Nhap vao gia tri phan tu thu i %d, j %d\n", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Gia tri phan tu thu i %d, j %d la: %d\n", i+1, j+1, arr[i][j]);
		}
	}
	//Tinh tong duong cheo chinh
	int total = 0;
	for(i=0; i<3; i++){
		total = total + arr[i][i];
	}
	printf("%d", total);
	return 0;
}
