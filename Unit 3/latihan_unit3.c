/*
Format Masukan:
Baris 1 berisi integer jumlah elemen yang dimasukan pada array
Baris 2 berisi nilai setiap elemen yang akan dimasukan

Format Luaran:
Hasil penjumlahan seluruh elemen pada array
*/


#include <stdio.h>

int main() {
    
    int jumlahElemen, total = 0;

    
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &jumlahElemen);

    
    printf("Masukkan nilai setiap elemen:\n");
    for (int i = 0; i < jumlahElemen; ++i) {
        int nilai;
        scanf("%d", &nilai);
        total += nilai;
    }

    // hasil penjumlahan array
    printf("Hasil penjumlahan seluruh elemen: %d\n", total);

    return 0;
}
