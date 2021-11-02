#include <iostream>
#include <string.h>
using namespace std;
char a1[10],a2[10],a3[10];
int main (){
    cin>>a1;
    cin>>a2;
	strcpy(a3,a1);
    strcpy(a1,a2);
	strcpy(a2,a3);
    cout <<"a1"<<a1<<"\n";
	cout <<"a2"<<a2<<"\n";
	cout <<"a3"<<a3<<"\n";
	if(strcmp(a1,a2))
	cout<<"esit"<<strcmp(a1,a2);
	else
	cout <<"esit degil";
}
