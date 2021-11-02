#include <stdio.h>
#include <conio.h>
int main(){
int girilen=0;
int eb=0;
printf("dilediginiz kadar sayigiriniz sonra hangisinin daha buyuk oldugunu ogrenmek icin -1 yazin: ");
while (girilen !=-1){
	scanf("\n %d",&girilen);
	printf("su ana kadarki en buyuk:%d\n",eb);
	if(girilen>eb)
	eb=girilen;
}
printf("en buyuk: %d",eb);
getch ();}
