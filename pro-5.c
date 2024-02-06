#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=5;i>=1;i--){
		for(k=i-1;k>=1;k--){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("* ");
		}
		for(j=4;j>=i;j--){
			printf("* ");
		}
		printf("\n\n");
	}
	
	for(i=2;i<=5;i++){
		for(k=i-1;k>=1;k--){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("* ");
		}
		for(j=4;j>=i;j--){
			printf("* ");
		}
		printf("\n\n");
	}
	
}
