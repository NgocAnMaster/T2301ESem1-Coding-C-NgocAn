#include <stdio.h>
int main(){
//	int j,i;
//	for(i=0, j=0; ; i++, j=j+2){
//		printf("Hello world\n");
//		if( i== 5){
//			printf("Gia tri cua j: %d\n",j);
//			break;
//		}
//	}
//	for (i=0;i<5;i++){
//		for(j=0; j<=i; j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	for(i=0;i<5;i++){
//		for(j=0;j<5;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
////	return 0;
//	
	int count = 1;
	for(count=1;count<10;count++){
		if (count==5){
			continue;
		}
		printf("%d\n", count);
	}
	while(count < 10){
		count++;
		if(count == 5){
//			break;
			continue;
		}
		printf("%d\n", count);
	}
	
	int choice;
	do{
		printf("Vui long nhap so trong khoang 1-3\n");
		scanf("%d", &choice);
	} while(choice < 1 || choice > 3);
	return 0;
}
