#include <stdio.h>
int main(){
	int count,i;
	count = 1;
	for(i=0; i<3; i++){
		count = 1;
		printf("Gia tri cua count truoc tinh toan: %d\n",count);
		count ++;
		printf("Gia tri cua count sau tinh toan: %d\n",count);
	}
}
