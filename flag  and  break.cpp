#include <stdio.h>
#include <conio.h>
int main(){
int a=1,b;
int flag =0;
printf ("asal olupolmadigin ogrenmek istediginiz sayiyi giriniz :");
scanf ("%d",&b);
while (a<b-1){
a++;
if(b%a==0){
flag =1;
break;
}
}
if(flag==0){
	printf("sayi asal" );
}
else {
printf("sayi asal degil");
}
getch ();
} 
