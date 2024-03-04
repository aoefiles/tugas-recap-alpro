#include <stdio.h>

// Fungsi keliling persegi
int hitungKelilingPersegi(int sisi) {
    return 4 * sisi;
}

// Fungsi luas persegi
int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

// Fungsi volume kubus
int hitungVolumeKubus(int sisi) {
    return sisi * sisi * sisi;
}

int main() {
    
    int sisi;

    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    int keliling = hitungKelilingPersegi(sisi);

    int luas = hitungLuasPersegi(sisi);

    int volume = hitungVolumeKubus(sisi);

    
    printf("Keliling persegi: %d\n", keliling);
    printf("Luas persegi: %d\n", luas);
    printf("Volume kubus: %d\n", volume);

    return 0;
}
