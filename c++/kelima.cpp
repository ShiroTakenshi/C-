#include<stdio.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	int ary[] = {10,20,30,40,50,70};
	int a = sizeof(ary)/sizeof(int);
	int index = - 1;
	int find = 20;
	int mid, low = 0, high = a-1;
	while(ary[low] < find && ary[high]>find){
		mid = ((find - ary[low])/(ary[high]-ary[low])) * (high-low)+low;
		if(ary[mid]<find){
			low = mid + 1;
		}
		else if(ary[mid] > find){
			high = mid - 1;
		}
		else{
			index = mid;
			break;
		}
	}
	if(ary[low]  == find){
		index = low;
	}
	else if(ary[high] == find){
		index = high;
	}
	if(index==-1){
		printf("data yang di cari tidak ada\n");
	}
	else{
		printf("Data yang dicari beradai di index ke-%d\n",index);
	}
	return 0;
}

