//struct
#include<iostream>
using namespace std;

void looping(int ulang) {
	//void tidak perlu return
	
	cout << "Perulangan sebanyak " << ulang << endl;
	
	for(int loop = 1;  loop <= ulang ; loop++){
		cout << "Ulang ke "<< loop << endl;
	}
}
int aritmatika(int pertama, int kedua, int ketiga){
	//+,-,*(kali),(/)bagi.
	return (pertama * kedua) / ketiga;
}

struct Angka{
	int aPertama;
	int aKedua;
	int aKetiga;
};

int main(){
	Angka a;

	int angkapertama, angkakedua, angkaketiga;
	
	looping(10);
	cout << "ARITMATIKA"<<endl;
	cout<<"Masukkan angka pertama : "; cin>>a. aPertama;
	cout<<"Dikali angka kedua : "; cin >> a.aKedua;
	cout<<"Dibagi angka ketiga: "; cin >> a.aKetiga;

	
	cout<<aritmatika(a.aPertama, a.aKedua, a.aKetiga)<<endl;
}
