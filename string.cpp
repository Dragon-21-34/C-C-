#include <iostream>
#include <string.h>
using namespace std;
char karakter[20];
int i;
int main(){as:
	gets (karakter);
	for(i=0;karakter[i];i++){
		cout<<karakter[i]<<"\n";
	}
	goto as;
//	getch ();
	return 0;
}
