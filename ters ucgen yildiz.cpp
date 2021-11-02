#include <stdio.h>
#include <conio.h>
int main(){
	int  i,j,k;
	for(i=10;i>=0;i--){
		for(j=0;j<4-i;j++){
			printf(" ");
		}
		    for(k=0;k<=i;k++){
		    	printf("*");
		    }
		printf(" \n");
	}
	getch ();}   
