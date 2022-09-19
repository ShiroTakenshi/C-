#include <iostream> // i input o output stream = inputan keyboard/data

using namespace std; // std adalah perwakilan dari iostream
// komentar = gak di eksekusi sama c++

int main() {
    
    int umur = 29;
    
    int idx; // << index
    
    char nama[20]; // pada array, bracket digunakan untuk panjang data/text
    
    // pada array, bracket digunakan untuk jumlah data
    // pada array, penulisan data harus didalam kurung kurawal
    // data adalah dinamis
    int jml_mahasiswa[3] = {2, 5, 7};
    
    // Pada char, bracket [] pertama adalah jumlah data array
    // dan pada bracket [] yang ke 2 itu panjang digit char nya
    char nama_mahasiswa[3][20] = {"pebri", "tri", "ricky"};
    
    cout << jml_mahasiswa[1] << endl; // index nya
    
    cout << nama_mahasiswa[2] << endl;
}

