#include <stdio.h>
#include <conio.h>
int main(){
	int mesai;
	printf("lutfen mesai saatini giriniz: ");
	scanf ("%d",&mesai);
	if(mesai<=10)
        printf("ucret:%d",mesai*5);        
    else if(mesai<=20)
        printf("ucret:%d",50+(mesai-10)*3);   
    else
        printf("ucret:%d",80+(mesai-20)*2);
	getch ();} 
