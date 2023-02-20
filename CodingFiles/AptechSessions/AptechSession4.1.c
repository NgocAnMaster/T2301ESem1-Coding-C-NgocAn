#include <stdio.h>
int main(){
	int a = 10;
	if(a != 10){
		printf("Hello T2301E");
	}else{
		printf("Hello World");
	}
	int choice;
	printf("Nhap vao lua chon:(1-3)\n");
	printf("Nhap vao 1 de giai phuong trinh bac 1\n");
	printf("Nhap vao 2 de giai phuong trinh bac 2\n");
	printf("Nhap vao 3 de giai phuong trinh bac 3\n");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Lua chon cua ban la : %d", choice);
			printf("\nGiai pt bac 1");
			break;
		case 2:
			printf("Lua chon cua ban la : %d", choice);
			printf("\nGiai pt bac 1");
			break;
		case 3:
			printf("Lua chon cua ban la : %d", choice);
			printf("\nGiai pt bac 1");
			break;
		default:
			printf("Lua chon sai, vui long chon (1-3)");
			break;
	}
	
//	if(choice == 1){
//		printf("Lua chon cua ban la : %d", choice);
//	}else if(choice == 2){
//		printf("Lua chon cua ban la : %d", choice);
//	}else if(choice == 3){
//		printf("Lua chon cua ban la : %d", choice);
//	}else{
//		printf("Lua chon sai, vui long chon (1-3)");
//	}
	return 0;
}
