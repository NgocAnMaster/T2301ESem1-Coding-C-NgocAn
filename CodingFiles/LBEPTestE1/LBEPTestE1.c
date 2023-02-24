/**	
 *	A 2-in-1 file that covers both exercises.
 *	Press 1 to run Exercise 1, press 2 to run Exercise 2.
 *	Allows repeat until 3 is pressed, in which the program exits normally.
 */

#include <stdio.h>
#include <math.h>
int isPrime(int number){
	if(number<=1){
		return (0); 
	} 
	else if(number==2){
		return (1);
	} 
	else{ 
		int a=sqrt(number); 
		for (int i=2;i<=a;i++){ 
			if(number%i==0){ 
				return (0); 
			} 
		} 
		return (1); 
	} 
}

int main(){
	int t;
	printf("---Practical exam paper for LBEP - Logic Building & Elementary Programming---\n");
	printf("Press:\n1 to check if a number is prime;\n2 to list prime numbers between two defined numbers;\n3 to exit.\nSelect a choice: ");
	do{
		scanf("%d",&t);
		if((t<1)||(t>3)){
			printf("Invalid choice, please try again.");
		}else if(t==1){
			printf("Check if a number is prime\n");
			int x;
			printf("Enter a number to check if it is prime or not: ");
			scanf("%d",&x);
			if(isPrime(x)==1){
				printf("This is a prime number.");
			}else if(isPrime(x)==0){
				printf("This is not a prime number.");
			}
		}else if(t==2){
			printf("List prime numbers between two defined numbers\n");
			int n,m;
			printf("Enter n: "); scanf("%d",&n);
			printf("Enter m: "); scanf("%d",&m);
			int k;
			if((n-m)>=0){
				k=(n-m)+1;
			}else if((n-m)<0){
				k=(m-n)+1;
			}
			int i;
			int j[k];
			int prime=0;
			if(n==m){
				if(isPrime(n)==1){
					printf("The prime number in your range is %d.",n);
				}else if(isPrime(n)==0){
					printf("No prime number detected in your range.");
				}
			}else if(n<m){
				for(i=n;i<=m;i++){
					if(isPrime(i)==1){
						j[prime]=i;
						prime++;
					}
				}
				if(prime==0){
					printf("No prime number detected in your range.");
				}else{
					printf("There are %d prime numbers in your range: ",prime);
					for(i=0;i<prime;i++){
						printf("%d",j[i]);
						if(i<(prime-1)){
							printf(", ");
						}else{
							printf(".");
						}
					}
				}
			}else if(m<n){
				for(i=m;i<=n;i++){
					if(isPrime(i)==1){
						j[prime]=i;
						prime++;
					}
				}
				if(prime==0){
					printf("No prime number detected in your range.");
				}else{
					printf("There are %d prime numbers in your range: ",prime);
					for(i=0;i<prime;i++){
						printf("%d",j[i]);
						if(i<(prime-1)){
							printf(", ");
						}else{
							printf(".");
						}
					}
				}
			}
		}
		if(t!=3){
			printf("\nSelect a choice: ");
		}else{
			printf("Thank you for using! Exiting...");
		}
	}while(t!=3);
	return 0;
}
