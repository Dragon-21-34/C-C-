#include <stdio.h>
#include <conio.h>
int main (){
    FILE *f;
    char k[15];
    if(f=fopen ("h.txt","r")){
    	fread (k,1,10,f);
    	k[14]=0;
    	fclose(f);
    	printf("dosynin ilk 15 karakteri verir:\n%s\n",k);
	}
	else
	printf ("dosya acilmadi bir hata olustu");
	return 0;
    getch ();}
