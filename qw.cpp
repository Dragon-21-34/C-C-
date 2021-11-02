#include <iostream>
#include <string.h>
using namespace std;
char karakter[10],Hasan[12];
int i;
int main(){
	gets (karakter);
	gets (Hasan);
	strcpy (karakter,Hasan);
	for(i=0;karakter[i];i++)
	cout<<karakter[i]<<"\n";
}
