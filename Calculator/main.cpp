#include <iostream>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		setlocale(LC_ALL, "Turkish");
		
		cout<<"************            Hesap Makinesi           ********************* \n";	
		cout<<"*--Hesap makinesi i�lem detaylar� : \n 1.islem toplama yapar \n 2.islem cikarma yapar \n 3.islem carpma yapar \n 4.islem bolme yapar\n 5.islem karek�k al�r \n 6.islem �s alma i�lemi yapar \n 7.i�lem iki say�n�n b�l�m�nden kalan� hesaplar";
		int secim;
		double x,y;
		float sonuc;
		cout<<"�ki sayi giriniz \n";
		cin >>x;
		cout<<"girilen sayi: "<<x<<"\n";
		cin >>y;
		cout<<"girilen sayi: "<<y<<"\n";
		cout<<"Seciminiz : \n";
		cin >>secim;
		cout<<"secim : "<<secim;
		
		switch(secim){
			case 1: 
			sonuc = x + y;
			cout<<"<\n Sonuc : " <<sonuc;
			break;
			
			case 2: 
			sonuc = x-y;
			cout<<"\nSonuc : " <<sonuc;
			break;
			
			case 3:
			sonuc = x*y;
			cout<<"\nSonuc : " <<sonuc;
			break;
			
			case 4:
			sonuc = x/y;
			cout<<"\nSonuc : " <<sonuc;
			break;
			
			case 5:
			x= sqrt(x);
			y= sqrt(y);
			cout<<"\nX karek�k�: "<<x <<"\n Y karek�k�: "<<y;
			break;
			
			case 6:
			x= pow(x,y);
			cout<<"\n Say�lar�n �ss� : "<<x;	
			break;
		
			case 7:
			sonuc=(int)x % (int) y;
			cout<<"\n B�l�mden kalan: "<<sonuc;
			break;
		}
		
	return 0;
}
