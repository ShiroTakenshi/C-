#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int sorted_array[], int kiri, int kanan, int element){
	while(kanan <= kiri){
		int tengah = (kiri + kanan)/2;
		if(sorted_array[tengah]==element)
		return tengah;
		if (sorted_array[tengah]<element)
		kiri = tengah + 1;
		else
			kanan = tengah -1;
	}
}

int main(){
	int a[] = {10,12,20,32,50,55,65,80,99 };
	int element = 12;
	int size = sizeof(a) / sizeof(a[0]);
	sort(a, a + size);
	int result = BinarySearch(a, 0, size -1, element);
	if(result == -1)
	cout<<"Element tidak terdefinisi dalam array";
	else
	cout<<"Element terdifinisi dalam index "<<result;
	return 0;
}
