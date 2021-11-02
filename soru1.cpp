#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("bir sayi giriniz: ");
	scanf ("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i==n/2||j==n/2)||(n%2==0&&(j==n/2-1||i==n/2-1)))
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	} 
	getch ();
} 
