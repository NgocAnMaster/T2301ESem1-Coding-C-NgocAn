/** Assignment Slot 14
 *  Viet Function de sap xep mang 1 chieu theo thu tu tang dan.
 */
#include <stdio.h>
#include <stdlib.h>
// Ham "sap xep" su dung con tro de sap xep lai cac bien trong ham main
void sapxep(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int t[1000],n,i,j;
	printf("Sap xep mang 1 chieu theo thu tu tang dan\nNhap gia tri n can tim (toi thieu 1, toi da 1000): ");
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri n cua ban nho hon 1. Vui long nhap lai: "); // bat nguoi dung nhap lai den khi n>=1
		}
		if(n>1000){
			printf("Gia tri n cua ban lon hon 1000. Vui long nhap lai: "); // bat nguoi dung nhap lai den khi n<=1000
		}
	}while((n<0)||(n>1000));
	for(i=0;i<n;i++){
		printf("Nhap gia tri thu %d/%d: ",i+1,n); scanf("%d",&t[i]); // Nhap gia tri trong mang
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<(n-1)-i;j++){
			if(t[j]>t[j+1]){
				sapxep(&t[j],&t[j+1]); // goi ham sap xep de sap xep lai chung, VA anh huong den bien trong ham main
			}
		}
	}
	printf("Mang 1 chieu sau khi da sap xep, theo thu tu tang dan: ");
	// In ra mang 1 chieu da sap xep
	for(i=0;i<n;i++){
		printf("%d ",t[i]);
	}
}
