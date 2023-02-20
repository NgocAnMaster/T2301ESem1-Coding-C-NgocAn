/**	
 *	Nhap vao chuoi n phan tu, moi phan tu do dai m. Tim chuoi co do dai lon nhat, sap xep.
 *	
 */
#include <stdio.h>
#include <string.h>
//int sosanhchuoi(char a[],int m){
//	int i;
//	int max=a[0];
//	for(i=0;i<(m-1);i++){
//		if(strcmp(a[i],a[i+1])<0){
//			max=a[i+1];
//		}
//	}
//	return max;
//}
//void sapxepchuoi(char *t[],int p){
//	int i,j;
//	char *temp;
//	for(i=0;i<(t-1);i++){
//		for(j=0;j<(i-1);j++){
//			if(strcmp(*t[j],*t[j+1])>0){
//				strcpy(*temp,*t[j]);
//				strcpy(*t[j],*t[j+1]);
//				strcpy(*t[j+1],*temp);
//			}
//		}
//	}
//}
int main(){
	int n,i,m;
	printf("Nhap vao chuoi n phan tu, moi phan tu do dai m. Tim chuoi co do dai lon nhat, sap xep\nNhap so phan tu chuoi n (toi thieu 1): ");
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri n ban vua nhap nho hon 1. Vui long nhap lai: ");
		}
	}while(n<1);
	printf("Ban muon so ky tu toi da trong moi chuoi la bao nhieu? (nhap toi thieu 1): ");	
	do{
		scanf("%d",&m);
		if(m<1){
			printf("Gia tri n ban vua nhap nho hon 1. Vui long nhap lai: ");
		}
	}while(m<1);
	char str[n][m];
	printf("Nhap gia tri cac chuoi cho chuoi %d phan tu (toi da %d ky tu, khong co dau cach):\n",n,m);
	for(i=0;i<n;i++){
		printf("Chuoi thu %d: ",i+1);
		scanf("%s",str[i]);
	}
	int strlonnhat = 0;
	for(i=0;i<(n-1);i++){
		if(strlen(str[i+1])>strlen(str[i])){
			strlonnhat++;
		}
	}
	printf("Chuoi co do dai lon nhat la chuoi thu %d",strlonnhat+1);
	for(i=0;i<n;i++){
		int length=strlen(str[i]),temp;
		for(int j=0;j<length-1;j++){
      		for(int k=j+1;k<length;k++){
         			/* So sánh l?n lu?t các ký t? và hoán d?i giá tr? nh? bi?n temp*/
         		if(str[i][j]>str[i][k]){
            		temp=str[i][j];
            		str[i][j]=str[i][k];
            		str[i][k]=temp;
         		}
      		}
  		}
	}//sapxepchuoi(&str,n);
	printf("\nDay cac chuoi ky tu sau khi duoc sap xep nhu sau: ");
	for(i=0;i<n;i++){
		printf("%s",str[i]);
		if(i<n-1){
			printf(", ");
		}
	}
}
