#include<iostream>
using namespace std;

int tambah(int angka1, int angka2)
{
	int hasil = angka1 + angka2;
	return hasil;
}
int kurang(int angka1, int angka2)
{
	int hasil = angka1 - angka2;
	return hasil;
}
int kali(int angka1, int angka2)
{
	int hasil = angka1 * angka2;
	return hasil;
}
float bagi(int angka1, int angka2)
{
	float hasil = angka1 / angka2;
	return hasil;
}

int main()
{
	int m,angka1,angka2;
	cout<<"PROGRAM KALKULATOR\n";
	cout<<"Menu Operasi :\n";
	cout<<"   1.Penambahan\n";
	cout<<"   2.Pengurangan\n";
	cout<<"   3.Perkalian\n";
	cout<<"   4.Pembagian\n";
	cout<<"Pilih Menu No    : ";cin>>m;
	cout<<"Bilangan Pertama : ";cin>>angka1;
	cout<<"Bilangan Kedua   : ";cin>>angka2;
	if (m == 1){
		cout<<"Hasil "<<angka1<<" + "<<angka2<<" = "<<tambah(angka1, angka2);
	}
	else if (m == 2){
		cout<<"Hasil "<<angka1<<" - "<<angka2<<" = "<<kurang(angka1, angka2);
	}
	else if (m == 3){
		cout<<"Hasil "<<angka1<<" * "<<angka2<<" = "<<kali(angka1, angka2);
	}
	else if (m == 4){
		cout<<"Hasil "<<angka1<<" / "<<angka2<<" = "<<bagi(angka1, angka2);
	}
	else{
		cout<<"Program Berakhir";
	}
	return 0;
}