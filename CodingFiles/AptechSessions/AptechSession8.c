#include <stdio.h>
int main(){
//	int *p;
//	int a = 10;
//	p = &a;
//	*p = 20;
//	
//	printf("Gia tri bien ma con tro p dang tro toi: %d\n", *p);
//	printf("gia tri cua con tro p: %d\n",p);
//	printf("Gia tri cua dia chi bien a: %d\n", &a);
//	printf("Gia tri dia chi con tro p: %d\n", &p);
//	printf("Gia tri cua a: %d\n", a);
	
	int arr[5] = {1,2,3,4,5};
	for(int i = 0; i<5; i++){
		printf("%d \n",*(arr + i)); //arr[i]
		
	}
	
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int (*p)[4];
	p = a;
	for(int i =0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("Gia tri phan : %d\n", *(*(p+i) + j) );
		}
	}
	
}
