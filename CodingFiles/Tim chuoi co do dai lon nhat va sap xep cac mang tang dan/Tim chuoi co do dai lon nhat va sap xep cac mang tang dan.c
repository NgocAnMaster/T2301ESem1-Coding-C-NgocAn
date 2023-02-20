/**	
 *	Viet function nhap vào 1 mang string n phan tu, moi chuoi trong mang co do dai m.
 *	Tim chuoi co do dai lon nhat trong mang
 *	Sap xep mang theo thu tu tang dan (su dung strcmp de so sanh)
 */
#include <stdio.h>
#include <string.h>

int main(){
	int n,i,m;
	
	// Khoi tao, nhap so phan tu trong chuoi
	printf("Nhap vao mot mang string n phan tu, moi chuoi trong mang co do dai m.");
	printf("\nTim chuoi co do dai lon nhat trong mang va sap xep cac mang theo thu tu tang dan.");
	printf("\nNhap so chuoi n trong mang (toi thieu 1): ");
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri n ban vua nhap nho hon 1. Vui long nhap lai: "); // n<1 cho nguoi dung nhap lai
		}
	}while(n<1);
	
	// Hoi nguoi dung so ky tu toi da trong chuoi la bao nhieu, tranh mat nhieu bo nho
	printf("Ban muon do dai toi da trong moi chuoi la bao nhieu? (nhap toi thieu 1): ");	
	do{
		scanf("%d",&m);
		if(m<1){
			printf("Gia tri m ban vua nhap nho hon 1. Vui long nhap lai: "); // m<1 cho nguoi dung nhap lai
		}
	}while(m<1);
	
	char str[n][m]; // gan string voi cac gia tri da cho
	
	// Nhap cac chuoi
	printf("Nhap cac chuoi cho mang string %d phan tu (toi da %d ky tu, khong co dau cach):\n",n,m);
	for(i=0;i<n;i++){
		printf("Chuoi thu %d: ",i+1);
		scanf("%s",str[i]);
	}
	
	int strlonnhat=0; // bien strlonnhat dung de thuc thi viec tim chuoi do dai lon nhat. Mac dinh la 0 ung voi chuoi thu nhat
	
	for(i=1;i<n;i++){ // bat dau tim tu chuoi thu hai. Neu n=1 khong thuc hien tim chuoi lon nhat
		if(strlen(str[i])>strlen(str[i-1])){ // neu chuoi nay co do dai lon hon chuoi truoc
			strlonnhat=i; // gan strlonnhat bang i ung voi chuoi do
		}
	}
	
	// Tra ket qua
	printf("Chuoi co do dai lon nhat trong mang la chuoi thu %d.",strlonnhat+1);
	
	// Tien hanh sap xep string
	char temp[m]; // day la bien tam
	for(i=1;i<n;i++){
		for(int j=1;j<n;j++){
         	if (strcmp(str[j-1],str[j])>0){  // dung strcmp de kiem tra
           		strcpy(temp,str[j-1]); // neu dung, dung lenh strcpy chep bien thu j ra temp, j+1 sang j và temp vao j+1
           		strcpy(str[j-1],str[j]);
           		strcpy(str[j],temp);
         	}
  		}
	}
	
	// Tra ve day da sap xep
	printf("\nMang string cac chuoi ky tu sau khi duoc sap xep nhu sau: ");
	for(i=0;i<n;i++){
		printf("%s",str[i]);
		if(i<n-1){
			printf(", ");
		}else{
			printf(".");
		}
	}
	return 0;
}
