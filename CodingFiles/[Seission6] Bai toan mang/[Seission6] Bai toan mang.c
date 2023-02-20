/* 
 * Nhap vao mang 10 phan tu
 * 1) Sap xep mang chieu tang dan.
 * 2) Tim vi tri cac so chan trong mang da sap xep.
 * 3) Co bao nhieu so le co trong mang da sap xep.
 */
#include <stdio.h>
int main(){
	int arr[10],n=10,i,j;
	printf("Nhap vao mang 10 phan tu, sap xep mang theo thu tu tang dan roi tim vi tri so chan va dem so le trong mang da sap xep.\n");
	for(i=0;i<n;i++){
		printf("Nhap phan tu arr thu %d: ",i+1); scanf("%d",&arr[i]);
	}
	printf("Dang sap xep...\n");
	// Sap xep phan tu
	int temp;
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
        	if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
   		}
	}
	printf("Thu tu sap xep tang dan chuoi phan tu arr ma ban vua nhap la: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	// Tim vi tri so chan
	printf("\nVi tri cua cac so chan trong mang da sap xep: \n");
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",i+1);
		}
	}
	// Dem so le
	int count=0;
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			count++;
		}
	}
	printf("\nSo cac so le trong mang da sap xep: %d",count);
	return 0;
}
