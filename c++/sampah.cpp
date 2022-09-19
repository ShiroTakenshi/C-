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
int aritmatika(int angkapertama, int angkakedua, int angkaketiga){
	//+,-,*(kali),(/)bagi.
	return pertama * kedua / ketiga;
}

int main(){
	int angkapertama, angkakedua, angkaketiga;
	
	looping(10);
	cout << "ARITMATIKA"<<endl;
	cout<<"Masukkan angka pertama : "; cin>>angkapertama;
	cout<<"Dikali angka kedua : "; cin >> angkakedua;
	cout<<"Dibagi angka ketiga: "; cin >> angkaketiga;

	
	cout<<aritmatika(angkapertama, angkakedua, angkaketiga)<<endl;
}
