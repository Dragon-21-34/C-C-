#include <stdio.h>
#include <conio.h>
int main(){
	int girilen;
	int eb=0;
	printf("5 sayi giriniz ve sonda hangisinin daha buyuk oldugunu ogrenin: ");
	for(int a=0;a<5;a++){
		scanf(" %d",&girilen);
		printf(" simdiye kadarki en buyuk sayi: %d\n",eb);
		if(girilen>eb)
		eb=girilen;	}
		printf("\neb: %d",eb);
getch ();}
