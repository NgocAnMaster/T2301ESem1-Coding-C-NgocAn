#include <stdio.h>
#include <string.h>
int main(){
	char str1[20];
	char str2[20];
	printf("Nhap vao chuoi 1\n");
	scanf("%s",str1);
	printf("Nhap vao chuoi 2\n");
	scanf("%s",str2);
	printf("Chuoi truoc khi cong\n");
	printf("str1 : %s\n", str1);
	printf("str2: %s\n", str2);
//	strcat(str1, str2);
	printf("str1 sau khi cong chuoi: %s\n", str1);
	int a = strcmp(str1, str2);
	printf("Gia tri cua phep so sanh hai chuoi: %d\n",a);
	char c ;
	getchar();
	c = getchar();
	char *p;
	p = strchr(str1,c);
	printf("dia chi cua chuoi str1 : %d\n", str1);
	printf("Dia chi cua ky tu: %d\n", p);
	printf("Vi tri cua ky tu trong chuoi str1: %d\n", p + 1 - str1 );
	char str3[20];
	strcpy(str3, str1);
	printf("Chuoi str3: %s\n", str3);
	printf("Do dai chuoi str3: %d\n", strlen(str3));

	return 0;
}
