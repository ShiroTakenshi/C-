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
	return pertama * kedua / ketiga;
}

int main(){
	looping(10);
	cout << "ARITMATIKA"<<endl;
	
	cout<<aritmatika(100, 25, 3)<<endl;
}
