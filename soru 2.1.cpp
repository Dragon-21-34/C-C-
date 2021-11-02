#include<stdio.h>
#include<conio.h>
int f(int n,int test){
	if(n-1==test)
	return 1;
	if(n%test==0)
	return 0;
	return f(n,test+1);
}
int g(int n){
	if(f(n,2))
	return n;
	return g(n-1);
}
int main(){
	int n;
	printf("bir sayi giriniz:");
	scanf("%d",&n);
	printf("%d",g(n));
	getch ();
}
