#include<stdio.h>
#include<conio.h>
int main(){
	int k,n=2,i,sayac=0;
	printf ("kac adet asal sayi istiyorsunuz:");
	scanf  ("%d",&k);
	while (sayac<k){
		int asal=1;
		for(i=2;i<n;i++){
			if(n%i==0)
			asal=0;
		}
		if(asal==1){
			printf(" %d ",n);
			sayac++;
		}
		n++;
	}
	getch ();
} 
