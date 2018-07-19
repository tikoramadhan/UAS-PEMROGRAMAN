#include <iostream>
#include <conio.h>
using namespace std;

class Mobil
{
	private:
		int roda, pintu;
		char warna [10];
	public:
		void data(int jum_roda, int jum_pintu, char jenis_warna [10]);
		void info();
};

int main()
{
	Mobil ferrari;
	Mobil pajero;
	
	cout<<"Mobil Ferrari : " <<endl;
	cout<<"---------------" <<endl;
	ferrari.data(4,2,"Hitam");
	ferrari.info();
	
	cout<<endl;
	cout<<"Mobil Pajero : " <<endl;
	cout<<"---------------" <<endl;
	pajero.data(4,4,"Merah");
	pajero.info();
	
	_getche();
	return 0;
}

void Mobil::data(int jum_roda, int jum_pintu, char jenis_warna [10])
{
	roda = jum_roda;
	pintu = jum_pintu;
	strcpy = jenis_warna;
}

void Mobil::info()
{
	cout<<"Jumlah Roda : "<<roda<<endl;
	cout<<"Jumlah Pintu : "<<pintu<<endl;
	cout<<"Jenis Warna : "<<warna<<endl;
}
