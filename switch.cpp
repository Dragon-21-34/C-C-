#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{ 
setlocale (LC_ALL,"Turkish");
char secenek;
float alan, yukseklik, taban;
cout << "bulmak istediðiniz üçkenin degerlerini girerek"
<< " Alan.Yükseklik ve Tabanýný bulur\n" << endl
<< " A ---> Alan : Bulmak için yükseklik ve tabani girecegiz:" << endl
<< " H ---> Yükseklik : Bulmak için alan ve tabani girecegiz:" << endl
<< " T ---> Taban : Bulmak için alan ve yüksekligi girecegiz:" << endl
<< endl << endl;
cout<< "Seçeneginiz?\n A)\n H)\n T) ";
cin>> secenek;
switch(secenek)
{
case 'a':
case 'A':
{
cout<< endl <<endl <<"Yükseklik: ";
cin>> yukseklik;
cout<<endl << "Taban: ";
cin >> taban;
alan = 0.5 * taban * yukseklik;
cout<<endl << endl << "Alani: " << alan << endl;
break;
}
case 'h':
case 'H':
{
cout<< endl << endl <<"Alani: ";
cin>> alan;
cout<<endl << "Tanabi: ";
cin >> taban;
yukseklik = 2.0 * alan / taban;
cout << endl << endl << "Yükselik: " << yukseklik << endl;
break;
}
case 't':
case 'T':
{
cout << endl <<endl <<"Alani: ";
cin >> alan;
cout << endl << "Yüksekligi: ";
cin >> yukseklik;
taban = 2.0 * yukseklik / alan;
cout << endl << endl <<"Tabani: " << taban << endl;
break;
}
}
getch();
return 0;}  
