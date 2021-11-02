#include <stdio.h>
#include <conio.h>
int main () { 
    int     dogumyilinizigiriniz,suankiyiligiriniz;
    printf ("yasinizi bir yil hatayla bula biliriz:\n");
	printf ("dogumyilinizigiriniz: ");
	scanf  ("%d",& dogumyilinizigiriniz);
	printf ("suankiyiligiriniz:");
	scanf  ("%d",& suankiyiligiriniz);
	printf ("yasiniz:%d",suankiyiligiriniz-dogumyilinizigiriniz);
	getch ();
}//F11 tusuna basiniz
