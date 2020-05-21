// Nama : Faqih Mualim
// Institut Teknologi Bandung

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

float gaya(float m, float a){
	float F;
	F = m*a;
	return F;
}

float distance(int t, int v, int a){
	float x;
	x = v*t+ 0.5*a*(t*t);
	return x;
}

float energi_kinetik(float m, float v){
	float ek;
	ek = float(0.5*m*(v*v));
	return ek;
}

float disipasi(float V, float R){
	float P;
	P = (V*V)/R;
	return (P);
}

typedef struct{
	float ordinat,absis;
} Point;

float waktu(Point A, Point B,int v){
	float waktu,S;
	S = sqrt((A.ordinat - B.ordinat)*(A.ordinat - B.ordinat)  + (A.absis - B.absis)*(A.absis - B.absis));
	waktu = S/v;
	return waktu;
}


void main_menu(){
	int pilihan(5);
	cout << "Pilihan Menu: \n";
	cout << "1. Force\n";
	cout << "2. Distance\n";
	cout << "3. Energi Kinetik\n";
	cout << "4. Daya Disipasi Listrik\n";
	cout << "5. Waktu dari A ke B\n";
	cout << "Input Pilihan: ";
	cin >> pilihan;
	float m,a,v,t,tegangan,R;
	Point A,B;
	switch (pilihan){
		case 1: 
			cout << "F=m*a\n";
			cout << "Masukkan Nilai massa: " ; cin >> m;
			cout << "Masukkan Nilai percepatan: " ; cin >> a;
			cout << "F = "<< gaya(m,a) << " Newton\n";
			break;
			
		case 2:
			cout << "x = v*t + 0.5*a*(t^2)\n";
			cout << "Masukkan nilai kecepatan: "; cin >> v;
			cout << "Masukkan Nilai percepatan: "; cin >> a;
			cout << "Masukkan nilai waktu: "; cin >> t;
			cout << "X = " << distance(t,v,a) << " M\n";
			break;
		
		case 3:
			cout << "EK = 0.5*m*(v^2)\n";
			cout << "Masukkan nilai massa: "; cin >> m;
			cout << "Masukkkan nilai kecepatan: "; cin >> v;
			cout << "Energi kinetik= " << energi_kinetik(m,v) << " J\n";
			break;
			
		case 4:
			cout << "P = v^2 / R\n";
			cout << "Masukkan nilai tegangan: "; cin >> tegangan;
			cout << "Masukkan nilai resistansi: "; cin >> R;
			cout << "P = " << disipasi(tegangan,R) << " W\n";
			break;
		
		case 5:
			cout << "t = s/v\n";
			cout << "Masukkan nilai kecepatan: "; cin >> v;
			cout << "Masukkan nilai absis titik a: "; cin >> A.absis;
			cout << "Masukkan nilai ordinat titik a: "; cin >> A.ordinat;
			cout << "Masukkan nilai absis titik b: "; cin >> B.absis;
			cout << "Masukkan nilai ordinat titik b: "; cin >> B.ordinat;
			cout << "waktu yang diperlukan dari A ke B adalah: " << waktu(A,B,v) << " s\n";
			break;
	}
	
}


int main()
{
	string str;
	do{
		main_menu();
		cout <<"Apakah anda ingin menggunakan fitur lainnya ? (y/n) : ";
		cin >> str;
		if (str != "y"){
			cout << "Terima Kasih !\n";
		}
		cout << "\n";
	}
	while (str == "y");
	return 0;
}
