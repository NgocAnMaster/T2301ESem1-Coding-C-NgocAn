#include <stdio.h>
int main(){
	int a,i,j;
	printf("Ve mot tam giac can\nNhap so dong: "); scanf("%d",&a);
	printf("Dang ve tam giac can...\n"); 
	for(i=0;i<=a;i++){
		for(j=0;j<a-i;j++){
			printf("  ");
		}
        for(j=1;j<=2*i-1;j++){
			printf("* ");
		}		
		printf("\n");
	}
	return 0;
}
