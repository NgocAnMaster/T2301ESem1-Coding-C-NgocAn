#include <stdio.h>
int main(){
	int a=10;
	int b=15;
	int c=a+b;
	printf("Tong a+b la %d\n",c);
	int d=a&b;
	printf("Gia tri a&b: %d\n",d);
	d=a|b;
	printf("Gia tri a|b: %d\n",d);
	d=~b;
	printf("Gia tri ~b: %d\n",d);
	d=a^b;
	printf("Gia tri a^b: %d\n",d);
	float f=3.14159;
	d=(int) f;
	printf("So f sau khi cast: %d\n",d);
	int f1=3;
	d=(float) f1;
	printf("So sau cast: %f",3.1234);
	/*char a=65;
	float b=a;*/
	return 0;
}
