#include <iostream>
using namespace std;
//Deklarasi variabel Nama, IPK dan NIM serta  variabel lain yg dibutuhkan
string nama, nim;
float total, ipk;
char pilih;
int main()
{
	cout<<"===========================================================";
	cout<<"\n\t   Selamat Datang Mahasiswa dan Mahasiswi\n\t        Universitas AMIKOM Yogyakarta";
	cout<<"\n===========================================================";
	cout<<"\n\nMasukan Nama Mahasiswa/i \t\t: ";
	getline(cin,nama);
	cout<<"Masukan NIM Mahasiswa/i \t\t: ";
	cin>>nim;
	cout<<"Anda Akan Menginput Nilai Makul ? y/n \t: ";
	cin>>pilih;
	system("cls");
	if(pilih=='y'){
		int jml;
		//Deklarasi variabel nilai dalam array
		int nilai[8];
		cout<<"Inputkan Nilai Anda Saudara/i "<<nama<<endl;
		cout<<"\nBerapa Nilai yang akan di Inputkan : ";
		cin>>jml;
		cout<<"\n";
		for(int i=0;i<jml;i++){
			cout<<"Masukan nilai ke "<<i+1<<" : ";
			cin>>nilai[i];
		}for(int i=0;i<jml;i++){
			total += nilai[i];
			ipk=total/jml;
		}
		}else if(pilih=='n'){
			cout<<"Nilai dan IPK tidak dapat ditampilkan\n";
		}
		cout<<"\nTotal Nilai dari "<<nama<<" NIM "<<nim<<" "<<total<<endl;
		cout<<"Dengan Rata-rata IPK "<<ipk<<endl;
		char predikat;
		if(ipk>=80){
			predikat='A';
		}else if(ipk<80 && ipk>=65){
			predikat='B';
		}else if(ipk<65 && ipk>=55){
			predikat='C';
		}else if(ipk<55){
			predikat='D';
		}
		cout<<"Dengan Predikat "<<predikat<<endl;
		
}
