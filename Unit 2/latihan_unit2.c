/*
Format Masukan:
Baris 1 berisi 1 integer untuk jumlah transaksi
Baris 2 dan selanjutnya berisi integer nominal masing-masing transaksi

Format Luaran:
Total pengeluaran hari ini

Note: Lakukan pengecekan terlebih dahulu, jika jumlah transaksi <= 0 maka
luarannya menjadi “Tidak ada transaksi hari ini”.

*/

#include <stdio.h>

int main() {
    
    int jumlahTransaksi, nominal, totalPengeluaran = 0;

    
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    
    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini.\n");
    } else {
        
        printf("Masukkan nominal transaksi:\n");
        for (int i = 0; i < jumlahTransaksi; ++i) {
            scanf("%d", &nominal);
            totalPengeluaran += nominal;
        }

        
        printf("Total pengeluaran hari ini: %d\n", totalPengeluaran);
    }

    return 0;
}
