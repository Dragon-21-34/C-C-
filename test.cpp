#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	FILE*c,*n;
	int a=16,f;
	float b=3.14,d;
	c=fopen("test.exe","w");
	fprintf(c,"%f %d",b,a);
	fclose(c);
	n=fopen("test.exe","r");
	fscanf(n,"%f %d",d,f);
	printf("bir sayi giriniz");
	scanf (" %d",f);
	printf("%f %d\n",b,a);
	printf(" %d",f);
	fclose(n);
	getch ();
	return 0;
} 
