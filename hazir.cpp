#include<stdio.h>
#include<conio.h>
int main(){
	int a[5]={3,8,7,2,6};
	for (int i=0;i<5;i++)
	{
		printf("a[%d]= %d \n",i,a[i] );
	}
	int gecici;
	for (int i=0;i<2;i++)
	{
	    gecici=a[i];
		a[i]=a[4-1];
		a[4-1]=gecici;	
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("a[%d]= %d \n",i,a[i] );
	}
	getch ();
} 
