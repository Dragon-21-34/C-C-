#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,c=0;
	printf("bir sayi giriniz:");
	scanf ("%d",&n);
	for(i=1;i<n;i=i*2){
	c++;
	}
	printf("%d",c);
	getch ();
} 
