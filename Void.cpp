#include<stdio.h>
#include<conio.h>
    void f(int*p){
    	*p=20;
	}
int main(){
    int a=10;
    f(&a);
    printf("%d",a);
getch ();
} 
