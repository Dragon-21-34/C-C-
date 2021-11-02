#include <stdio.h>
#include <conio.h>
int main (){
    FILE *c,*n;
    int b=5,f;
    float a=13.72,q=6.68,e,g;
    c=fopen("test.data","w");
    fprintf(c,"%d %f %d",a,b,q);
    fclose (c);
    n=fopen("test.data","r");
    fscanf (n,"%f %d %f",&e,&f,&g);
    printf ("%f %d %f\n",a,b,q);
    printf ("%f %d %f\n",e,f,g);
    fclose (n);
    getch ();} 
