#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{ 
setlocale (LC_ALL,"Turkish");
char secenek;
float alan, yukseklik, taban;
cout << "bulmak istedi�iniz ��kenin degerlerini girerek"
<< " Alan.Y�kseklik ve Taban�n� bulur\n" << endl
<< " A ---> Alan : Bulmak i�in y�kseklik ve tabani girecegiz:" << endl
<< " H ---> Y�kseklik : Bulmak i�in alan ve tabani girecegiz:" << endl
<< " T ---> Taban : Bulmak i�in alan ve y�ksekligi girecegiz:" << endl
<< endl << endl;
cout<< "Se�eneginiz?\n A)\n H)\n T) ";
cin>> secenek;
switch(secenek)
{
case 'a':
case 'A':
{
cout<< endl <<endl <<"Y�kseklik: ";
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
cout << endl << endl << "Y�kselik: " << yukseklik << endl;
break;
}
case 't':
case 'T':
{
cout << endl <<endl <<"Alani: ";
cin >> alan;
cout << endl << "Y�ksekligi: ";
cin >> yukseklik;
taban = 2.0 * yukseklik / alan;
cout << endl << endl <<"Tabani: " << taban << endl;
break;
}
}
getch();
return 0;}  
