/**	
 *	Dinh nghia 1 advanced data type:  staff gom cac thông tin sau : char name[20], int age, float salary.
 *	Viet function nhap vao tu ban phim n staff.
 *	Sap xep n nhan vien do theo thu tu luong(salary) tang dan
 */

#include <stdio.h>
#include <string.h>
// dinh nghia advanced data type la staff theo dau bai
struct staff{
	char name[20];
	int age;
	float salary;
};

// phan chinh
int main(){
	int n,i; // khai bao bien n de nhap so nhan vien, bien i dung trong vong lap
	printf("Nhap tu ban phim n staff, sap xep n nhan vien do theo thu tu luong tang dan\n");
	printf("Nhap so nhan vien can sap xep, toi thieu 1 nguoi: ");
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri ban vua nhap nho hon 1, vui long nhap lai: "); // neu n nhap vao nho hon 1, nhap lai
		}
	}while(n<1);
	struct staff stff[n]; // dung mang voi n nhan vien
	printf("Nhap thong tin ve %d nhan vien theo thu tu: Ten - Tuoi - Muc luong:\n",n); // nhap thong tin cho n nhan vien:
	for(i=0;i<n;i++){
		getchar();
		printf("Nhan vien thu %d:\n",i+1);
		printf("Ten (toi da 20 ky tu): "); gets(stff[i].name); // cho phep dau cach
		printf("Tuoi: "); scanf("%d",&stff[i].age);
		printf("Muc luong: "); scanf("%f",&stff[i].salary);
	}
	// tien hanh sap xep
	char tempname[20];
	int tempage;
	float tempsalary;
	for(i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(stff[j-1].salary>stff[j].salary){
				// Buoc 1: Tien hanh sap xep muc luong
				tempsalary=stff[j-1].salary;
				stff[j-1].salary=stff[j].salary;
				stff[j].salary=tempsalary;
				// Buoc 2: Tien hanh sap xep tuoi
				tempage=stff[j-1].age;
				stff[j-1].age=stff[j].age;
				stff[j].age=tempage;
				// Buoc 3: Tien hanh sap xep ten
				strcpy(tempname,stff[j-1].name);
				strcpy(stff[j-1].name,stff[j].name);
				strcpy(stff[j].name,tempname);
			}
		}
	}
	// in ket qua
	printf("Danh sach nhan vien theo thu tu luong tang dan:\n");
	for(i=0;i<n;i++){
		printf("%d. %s, %d tuoi, muc luong %f",i+1,stff[i].name,stff[i].age,stff[i].salary);
		if(i<(n-1)){
			printf("\n");
		}
	}
	return 0;
}
