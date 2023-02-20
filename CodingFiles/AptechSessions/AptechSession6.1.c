#include <stdio.h>
int main(){
	int arr[5];
	int arr1[5] = {1,2,3,4,5};
	int i;
	// Loop qua 1 mang 1 chieu
	for(i=0;i<5; i++){
		printf("Phan tu co index i=%d la: %d\n", i,arr1[i]);
	}
	// copy mang
	for(int i=0;i<5; i++){
		arr[i]=arr1[i];
	}
//	for(int i=0;i<5; i++){
//		printf("Nhap vao phan tu thu: %d\n",i);
//		scanf("%d", &arr[i]);
//	}
	printf("Gia tri cac phan tu trong mang arr\n");
	for(i=0;i<5; i++){
		printf("Phan tu co index i=%d la: %d\n", i,arr[i]);
	}
	return 0;
}
