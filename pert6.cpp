//    PROGRAM MENGHITUNG GAJI KARYAWAN
//    ----> ROMI SANTOSO

#include <iostream>

using namespace std;

int main() {
	string nama;
	char gol;
	int j_kerja, j_lembur, j_total, u_kerja, u_lembur, u_total;
	
	cout<<"Input nama : ";
	cin>>nama;
		
	cout<<"Input golongan (A/B/C/D) : ";
	cin>>gol;

	cout<<"Input waktu jam kerja : ";
	cin>>j_total;
	
	//cek jam lembur
	j_lembur = j_total - 48;
	
	if(j_lembur >= 0) {
		u_lembur = j_lembur * 3000;
		j_kerja = 48;
		
	} else {
		j_kerja = j_total;
		j_lembur = 0;
		u_lembur = 0;
	}
		
	//hitung upah berdasarkan golongan
	if(gol == 'A') {
		u_kerja = j_kerja * 4000;
    
	} else if(gol == 'B') {
		u_kerja = j_kerja * 5000;
    
	} else if(gol == 'C') {
		u_kerja = j_kerja * 6000;
    
	} else if(gol == 'D') {
		u_kerja = j_kerja * 7000;
    
	} else {
		cout<<"Pilihan tidak tersedia";
    
	}
	
	//total upah
	u_total = u_kerja + u_lembur;
	
	//cetak hasil
	cout<<"\n\n\t=====================================================================";
	cout<<"\n\t|       NAMA       | GOLONGAN | JAM KERJA | JAM LEMBUR |    UPAH    |";
	cout<<"\n\t|-------------------------------------------------------------------|";
	cout<<"\n\t|   "<<nama<<"   |     "<<gol<<"    |     "<<j_kerja<<"    |      "<<j_lembur<<"     |   "<<u_total<<"   |";
	cout<<"\n\t====================================================================";
	
	return 0;
}
