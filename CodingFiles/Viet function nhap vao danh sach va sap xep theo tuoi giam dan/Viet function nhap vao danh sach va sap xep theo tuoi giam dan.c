/**	
 *	Viet function nhap vao danh sach n nhan vien (ten, tuoi, luong) vao file.
 *	Viet function doc file nhan vien, sap xep nhan vien theo do tuoi giam dan
 */
#include <stdio.h>
#include <string.h>

// dung typedef va struct de khai bao cau truc nhan vien cho bien nv
struct employee{
	char name[25];
	int age;
	float salary;
};

void fileWrite(FILE *f);
void fileAppend(FILE *f);
void fileRead(FILE *f);

// Ham chinh
int main(){
	FILE *f;
	f=fopen("danhsachnhanvien.txt","r"); // doc danh sach nhan vien
	int n;
	printf("Dang mo danhsachnhanvien.txt...\n");
	if(f==NULL){
		printf("Tap tin chua ton tai, ban co muon tao tap tin moi khong?\n1: Co\n2: Khong\nNhap lua chon: ");
		int t;
		do{
			scanf("%d",&t);
			if(t==1){
				printf("Dang tao tap tin...\n");
				fileWrite(f);
		 	}else if(t==2){
				printf("Dang thoat...");
			}else{
				printf("Gia tri ban vua nhap khong hop le, vui long nhap lai: ");	
			}
		}while((t<1)||(t>2));
	}else{
		printf("Tap tin da ton tai. Ban muon lam gi voi no?\n1: Ghi de tap tin\n2: Them noi dung vao tap tin\n3: Doc tap tin\n4: Xoa tap tin\n5: Thoat\nNhap lua chon: ");
		int t;
		do{
			scanf("%d",&t);
			if(t==1){
				printf("Dang ghi de tap tin...\n");
				fileWrite(f);
			}else if(t==2){
				printf("Dang mo tap tin de them noi dung...\n");
				fileAppend(f);
			}else if(t==3){
				printf("Dang mo tap tin de doc thong tin...\n");
				fileRead(f);
			}else if(t==4){
				printf("Dang xoa danhsachnhanvien.txt...\n");
				fclose(f);
				int del=remove("danhsachnhanvien.txt");
				if(del==0){
					printf("Da xoa tap tin.");
				}else{
					printf("Khong the xoa tap tin (%d).",del);
				}
			}else if(t==5){
				printf("Dang thoat...");
			}else{
				printf("Gia tri ban vua nhap khong hop le, vui long nhap lai: ");	
			}
		}while((t<1)||(t>5));
	}
	fclose(f);
	return 0;
}

void fileWrite(FILE *f){
	f=fopen("danhsachnhanvien.txt","w"); // doi che do neu tap tin chua ton tai
	// Tien hanh nhap nhan vien
	printf("Nhap so nhan vien can nhap trong danh sach (toi thieu 1): ");
	int n;
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri ban vua nhap nho hon 1, vui long nhap lai: ");
		}
	}while(n<1);
	struct employee empl[n];
	printf("Nhap danh sach nhan vien:\n");
	for(int i=0;i<n;i++){
		getchar();
		printf("Nhan vien thu %d:\nTen nhan vien (toi da 25 ky tu): ",i+1);
		gets(empl[i].name);
		printf("Tuoi: ");
		scanf("%d",&empl[i].age);
		printf("Muc luong: ");
		scanf("%f",&empl[i].salary);
	}
	for(int i=0;i<n;i++){
		fwrite(&empl[i], sizeof(struct employee),1,f);
	}
	printf("Da luu thong tin duoc nhap vao tap tin danhsachnhanvien.txt.");
}

void fileAppend(FILE *f){
	f=fopen("danhsachnhanvien.txt","a");
	int ch; 
	do {
		ch = fgetc(f);
	}while(ch != EOF);
	// Tien hanh nhap nhan vien
	printf("Nhap so nhan vien can nhap them trong danh sach (toi thieu 1): ");
	int n;
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri ban vua nhap nho hon 1, vui long nhap lai: ");
		}
	}while(n<1);
	struct employee empl[n];
	printf("Nhap danh sach nhan vien:\n");
	for(int i=0;i<n;i++){
		getchar();
		printf("Nhan vien thu %d:\nTen nhan vien (toi da 25 ky tu): ",i+1);
		gets(empl[i].name);
		printf("Tuoi: ");
		scanf("%d",&empl[i].age);
		printf("Muc luong: ");
		scanf("%f",&empl[i].salary);
	}
	for(int i=0;i<n;i++){
		fwrite(&empl[i], sizeof(struct employee),1,f);
	}
	printf("Da luu thong tin duoc nhap vao tap tin danhsachnhanvien.txt.");
}

void fileRead(FILE *f){
	f=fopen("danhsachnhanvien.txt","r"); 
	int i;
	printf("Nhap so nhan vien can doc trong danh sach (toi thieu 1): ");
	int n;
	do{
		scanf("%d",&n);
		if(n<1){
			printf("Gia tri ban vua nhap nho hon 1, vui long nhap lai: ");
		}
	}while(n<1);
	
	struct employee empl[n];
	for(i=0;i<n;i++){
		fread(&empl[i],sizeof(struct employee),1,f);
	}
	
	// tien hanh sap xep
	char tempname[25];
	int tempage;
	float tempsalary;
	for(i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(empl[j-1].age<empl[j].age){
				// Buoc 1: Tien hanh sap xep muc luong
				tempsalary=empl[j-1].salary;
				empl[j-1].salary=empl[j].salary;
				empl[j].salary=tempsalary;
				// Buoc 2: Tien hanh sap xep tuoi
				tempage=empl[j-1].age;
				empl[j-1].age=empl[j].age;
				empl[j].age=tempage;
				// Buoc 3: Tien hanh sap xep ten
				strcpy(tempname,empl[j-1].name);
				strcpy(empl[j-1].name,empl[j].name);
				strcpy(empl[j].name,tempname);
			}
		}
	}
	// in ket qua
	printf("Danh sach nhan vien theo thu tu tuoi giam dan:\n");
	for(i=0;i<n;i++){
		printf("%d. %s, %d tuoi, muc luong %f",i+1,empl[i].name,empl[i].age,empl[i].salary);
		if(i<(n-1)){
			printf("\n");
		}
	}
}

