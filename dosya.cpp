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
//	fprintf(w,"lütfen adýnýzý doðum tarihinizi ve olduðumuz yýlý giriniz:\n");
//	fscanf (w,"%c,%d,%d",&se,&a,&b);
//	fprintf(w,"Adýn:",se);
//	fprintf(w,"\nyaþýn:",b-a);
//	fclose(w);
//	FILE*q;
//	q=fopen("deneme.txt","r");
//	fprintf(q,"Adýn:",se);
//    fscanf (w,"%c,%d,%d",&se,&a,&b);
//	fprintf(q,"yaþýn:",b-a);
//	fclose(q);
	FILE*d;
	d=fopen("deneme.txt","w");	
	fprintf(d,"lütfen adýnýzý doðum tarihinizi ve olduðumuz yýlý giriniz:\n");
//	fscanf (d,"%c,%d,%d",&se,&a,&b);
	fprintf(d,"Adýn:",se);
	fprintf(d,"\nyaþýn:",b-a);
	fclose(d);
	FILE*s;
	s=fopen("deneme.txt","r");
//	fprintf(s,"Adýn:",se);
    fscanf (s,"%c,%d,%d",&se,&a,&b);
//	fprintf(s,"yaþýn:",b-a);
	fclose(s);	
	getch();
} 
