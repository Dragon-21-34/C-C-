#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b;
	char se[20];	
//	FILE*w;
//	w=fopen("deneme.txt","w");	
//	fprintf(w,"l�tfen ad�n�z� do�um tarihinizi ve oldu�umuz y�l� giriniz:\n");
//	fscanf (w,"%c,%d,%d",&se,&a,&b);
//	fprintf(w,"Ad�n:",se);
//	fprintf(w,"\nya��n:",b-a);
//	fclose(w);
//	FILE*q;
//	q=fopen("deneme.txt","r");
//	fprintf(q,"Ad�n:",se);
//    fscanf (w,"%c,%d,%d",&se,&a,&b);
//	fprintf(q,"ya��n:",b-a);
//	fclose(q);
	FILE*d;
	d=fopen("deneme.txt","w");	
	fprintf(d,"l�tfen ad�n�z� do�um tarihinizi ve oldu�umuz y�l� giriniz:\n");
//	fscanf (d,"%c,%d,%d",&se,&a,&b);
	fprintf(d,"Ad�n:",se);
	fprintf(d,"\nya��n:",b-a);
	fclose(d);
	FILE*s;
	s=fopen("deneme.txt","r");
//	fprintf(s,"Ad�n:",se);
    fscanf (s,"%c,%d,%d",&se,&a,&b);
//	fprintf(s,"ya��n:",b-a);
	fclose(s);	
	getch();
} 
