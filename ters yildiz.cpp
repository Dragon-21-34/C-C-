#include <stdio.h>
#include <conio.h>
int main(){
	int  i,j;
	for(i=20;i>=0;i--){
		for(j=0;j<=i;j++){
			printf ("*");
		}
        printf("\n");
	}
	getch ();
} 
