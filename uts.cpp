#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

 int main() {
    char nama[50];
    long int nim;
    double gajiPokok, tunjanganAnak, tunjanganIstri, gajiTotal, i, j;
    int jumlahAnak;
    
    cout<<"Input NIM : ";
    //cin.getline(nama, sizeof(nama));
   //input dengan spasi
    cout<<"Input Nama : ";
    cin>>nama;
    cout<<"Input jumlah anak : ";
    cin>>jumlahAnak;
    
    //hitung gaji pokok
    gajiPokok = nim / 1000;
    
    //hitung tunjangan istri
    if(jumlahAnak != 0){
    	tunjanganIstri = gajiPokok * 10 / 100;
	} else { 
		tunjanganIstri = gajiPokok * 5 / 100;
	}
	
	//hitung tunjangan anak
	if(jumlahAnak <= 3){
		i = jumlahAnak;
		j = i * 5 / 100;
		tunjanganAnak = j * gajiPokok;
	} else if(jumlahAnak > 3){
		tunjanganAnak = (gajiPokok * 3) * 5 / 100;
	}
	
	//hitung gaji total
	gajiTotal = gajiPokok + tunjanganIstri + tunjanganAnak;
	
	//cetak hasil
	cout<<"\n\t********* PROGRAM MENGHITUNG GAJI KARYAWAN *********\n";
	cout<<"\tNIM\t\t: "<<nim;
	cout<<"\n\tNama\t\t: "<<nama;
	cout<<"\n\tStatus\t\t: Menikah";
	cout<<"\n\t----------------------------------------------------";
	cout<<"\n\tJumlah Anak\t\t: "<<jumlahAnak;
	cout<<"\n\n\tGaji Pokok\t\t: "<<setiosflags(ios::fixed)<<setprecision(2)<<gajiPokok;
	cout<<"\n\n\tTunjangan Anak\t\t: "<<setiosflags(ios::fixed)<<setprecision(2)<<tunjanganAnak;
	cout<<"\n\n\tTunjangan Istri\t\t: "<<setiosflags(ios::fixed)<<setprecision(2)<<tunjanganIstri;
	cout<<"\n\n\tTotal Gaji\t\t: "<<setiosflags(ios::fixed)<<setprecision(2)<<gajiTotal;
	cout<<"\n\t****************************************************\n";

    return 0;
}
