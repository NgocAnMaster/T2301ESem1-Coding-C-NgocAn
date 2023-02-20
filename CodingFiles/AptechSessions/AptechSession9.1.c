#include <stdio.h>

void printData(int a);
int sum(int a, int b);
void giaptbac1(float a,float b);
void funA();
void funcB(int a,int b);
static int st = 10;
void swap(int *a, int *b);
void changeFunction(void (*p)());
void callFunction(int (*p)(int,int));
int main(){
	int a = 10;
	printData(a);
	int b = sum(10, 20);
	printf("Tong la :%d\n",b);
//	float c,d;
//	printf("Nhap vao a:\n");
//	scanf("%f",&c);
//	printf("Nhap vao b:\n");
//	scanf("%f",&d);
//	giaptbac1(c,d);
	funA();
	funcB(a,b);
	funcB(a,b);
	printf("Gia tri sau khi ra khoi func st: %d", st);
	printf("Dia chi ham: %d \n", printData);
	printf("Dia chi ham: %d \n", &printData);
	printf("Gia tri truoc khi thay doi a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("Gia tri sau khi thay doi a: %d, b: %d\n", a, b);
	
//	printf("Dia chia cua ham printData: %d \n", printData);
//	printf("Dia chia cua ham printData: %d \n", &printData);
//	void (*p)(int) = printData;
//	(*p)(50);
//	int (*p1)(int, int) = sum;
//	int total = (*p1)(10,30);
//	printf("Gia tri tong: %d\n", total);
//	changeFunction(funA);
//	callFunction(sum);
	return 0;
}

void printData(int a){
	printf("Gia tri bien dau vao la: %d\n", a);
}

int sum(int a, int b){
	int c = a + b;
	return c;
}
void giaptbac1(float a,float b){
	if( a == 0){
		if(b == 0){
			printf("Phuong trinh vo so nghiem\n");
		}else{
			printf("Phuong trinh vo nghiem\n");
			
		}
	}else{
		float c = -b/a;
		printf("Phuong trinh co nghiem la: %f\n",c);
	}
}
void funA(){
	printf("Hello T2301E\n");
}

void funcB(int a,int b){
	static int stc = 10;
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("Gia tri cua a, b trong func\n");
	printf("Gia tri cua a: %d, b: %d\n",a,b);
	st++;
	printf("Gia tri cua bien stc: %d\n", stc);
	stc++;
	printf("truoc khi Goi funcA trong funcB\n");
	funA();
	printf("Sau khi Goi funcA trong funcB\n");
}

void swap(int *a, int *b){
//	*a = *a + 10;
//	*b = *b + 10;
	printf("tong a, b la: %d\n", *a+*b);
}

void changeFunction(void (*p)()){
	p();
}

void callFunction(int (*p)(int,int)){
	int c = p(10,20);
	printf("Gia tri cua c la :  %d\n",c);
}
