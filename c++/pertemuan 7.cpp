#include<iostream>
using namespace std;
int main(){
	int array[] = { 4, 7, 5, 9, 3, 2, 11};
	int panjang_array = (sizeof(array)/sizeof(*array));
	int tukar;
	for (int ulang_1=0; ulang_1< panjang_array; ulang_1 ++){
		for(int ulang_2 = 0; ulang_2 < ulang_1 ; ulang_2 ++){
			if(array[ulang_1]<array[ulang_2]){
				tukar = array[ulang_1];
				array[ulang_1] = array[ulang_2];
				array[ulang_2] = tukar;
				
			}
			
			
			
		}
		cout<<" Pengurutan ke "<< ulang_1 + 1 << "=";
		
		for(int ulang_3 = 0; ulang_3 < panjang_array; ulang_3 ++){
					cout<<" "<< array[ulang_3];
	}

			cout<< endl;
	}
	
}
