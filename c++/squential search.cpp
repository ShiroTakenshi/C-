#include<iostream>
using namespace std;
int main(){
	int array[10];
	int elementarray, kunci;
	bool found = false;
	cout<<"Masukkan nomer element array: ";
	cin>>elementarray;
	for(int i=0; i<<elementarray; i++){
		cout<<"array["<<i<<" }: ";
		cin>>array[i];
	}
	cout<<"Masukkan nilai yang igin dicari: ";
	cin>>kunci;
	for(int i=0; i<elementarray; i++){
		if(kunci==array[i]){
			found = true;
			cout<<"Nilai array yang ditemukan pada index = ["<<i<<"]";
			
		}
	}
	if(!found){
		cout<<"Kunci tidak ditemukkan";
	}
	return 0;
}

