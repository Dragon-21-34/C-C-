#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int i,j;
char a[][80]={"pazartesi\n","sali\n","carsamba\n","persembe\n","cuma\n","cumartesi\n","pazar\n"};
int main (){
	for(i=0;a[i][0];i++){
		for(j=0;a[i][j];j++){
			cout<<a[i][j]<<"\n";
		}
	}
	return 0;
	getch ();
	//sistem ("paus");
	}
