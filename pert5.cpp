//     PROGRAM MENU DALAM PERSEGI PANJANG
//     -----> ROMI SANTOSO


#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
	awal:
	int menu, p, l;
	char status;
	float hasil;

	do {
		system("cls");
		cout<<"=================================";
		cout<<"\nMENU EMPAT PERSEGI PANJANG";
		cout<<"\n  1. Menghitung Luas";
		cout<<"\n  2. Menghitung Keliling";
		cout<<"\n  3. Menghitung Panjang Diagonal";
		cout<<"\n  4. Keluar";
		cout<<"\n=================================";
		cout<<"\n\nPilih menu : ";
		cin>>menu;
		
		switch(menu) {
			//menghitung luas
			case 1:
				system("cls");
				cout<<"MENGHITUNG LUAS PERSEGI PANJANG\n";
				cout<<"Input Panjang : ";
				cin>>p;
				
				cout<<"Input Lebar : ";
				cin>>l;
				
				hasil = p * l;
				cout<<"\nL : "<<p<<" x "<<l<<" = "<<hasil;
				break;
			
			//menghitung keliling
			case 2:
				system("cls");
				cout<<"MENGHITUNG KELILING PERSEGI PANJANG\n";
				cout<<"Input Panjang : ";
				cin>>p;
				
				cout<<"Input Lebar : ";
				cin>>l;
				
				hasil = 2 * (p + l);
				cout<<"\nK : 2 x ("<<p<<" + "<<l<<")= "<<hasil;
				break;
			
			//mengitung panjang diagonal	
			case 3:
				system("cls");
				cout<<"MENGHITUNG PANJANG DIAGONAL PERSEGI PANJANG\n";
				cout<<"Input Panjang : ";
				cin>>p;
				
				cout<<"Input Lebar : ";
				cin>>l;
				
				hasil = sqrt((double)p * p + (double)l * l);
				cout<<"Panjang diagonal : "<<hasil;
				break;
				
			case 4:
				goto akhir;
				
			default:
				cout<<"Menu pilihan tidak tersedia";
				
		}
		
		cout<<"\n\nKe menu utama [Y]? ";
		cin>>status;
		
	} while (status == 'Y' || status == 'y');
		goto awal;
	
	akhir:
	system("cls");
	cout<<"Exit Program";
	return 0;
	
}
