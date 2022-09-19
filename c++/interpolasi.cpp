#include<iostream>
using namespace std;

void interpolationSearch(int ary[], int a, int key){
	int rendah = 0, tinggi = a-1;
	bool flag = true;
	
	while(rendah <= tinggi && key >= ary[rendah] && key <= ary[tinggi]){
		if(rendah == tinggi){
			cout<<"Element tidak ditemukkan pada posisi : "<<rendah<<endl;
		int q = (key - ary[rendah])/(ary[tinggi] - ary[rendah]);
			int pos=rendah + (tinggi - rendah )*q;
		
			if(ary[pos] == key){
				cout<<"Element ditemukkan diposisi : "<<pos<<endl;
				flag = false;
			}
			if(ary[pos]<key){
				rendah = pos +1;
			}
			else{
				tinggi = pos -1;
			}
		}
		if(flag == true){
			cout<<"element tidak ditemukkan "<<endl;
		}
	}
}

int main(){
    int a,i,x;
    cout<<"Enter the number of elements\n";
    cin>>a;
    int ary[a];
    cout<<"Enter the elements of the array\n";
    for(i=0; i<a; i++){
        cin>>ary[i];
    }
    cout<<"Enter the element to be searched\n";
    cin>>x;
    interpolationSearch(ary, a, x);
    return 0;
}
