#include<stdio.h>
#include<conio.h>
int main(){
	int sum=0;
	for(int d=1;d<=100;d++){
		int p=0;
		for(int i=2;i<d;i++){
		    if(d%i==0)
			p=1;	
		}	
		if(p==0){
			printf(" %d \n",d);
			sum=sum+d;
		}
	}
	printf("sum:%d",sum);
	getch ();
}
