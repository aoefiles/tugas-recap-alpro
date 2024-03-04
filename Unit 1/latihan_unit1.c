/*
Format masukan:
Baris 1 berisi 2 integer, yang pertama merupakan jarak, yang kedua merupakan waktu
Baris 2 berisi 2 integer, yang pertama merupakan kecepatan, yang kedua merupakan waktu
Baris 3 berisi 2 integer, yang pertama merupakan jarak, yang kedua merupakan kecepatan

Format luaran:
Baris 1 menampilkan hasil perhitungan kecepatan dalam float (2 angka dibelakang koma)
Baris 2 menampilkan hasil perhitungan jarak dalam float (2 angka dibelakang koma)
Baris 3 menampilkan hasil perhitungan waktu dalam float (2 angka dibelakang koma)
*/


#include <stdio.h>

int main() {
  
    float jarak1, waktu1, jarak2, waktu2, kecepatan1, kecepatan2;

    printf("Masukkan jarak dan waktu (misal: 100 10): ");
    scanf("%f %f", &jarak1, &waktu1);

    printf("Masukkan kecepatan dan waktu (misal: 20 5): ");
    scanf("%f %f", &kecepatan1, &waktu2);

    printf("Masukkan jarak dan kecepatan (misal: 150 30): ");
    scanf("%f %f", &jarak2, &kecepatan2);


    // kecepatan
    float v = jarak1 / waktu1;
    // hasil perhitungan kecepatan
    printf("Kecepatan : %.2f m/s\n", v);


    // jarak
    float s = kecepatan1 * waktu2;
    // hasil perhitungan jarak
    printf("Jarak : %.2f m\n", s);
    

    // waktu
    float t = jarak2 / kecepatan2;
    // hasil perhitungan waktu
    printf("Waktu : %.2f s\n", t);
    

    return 0;
}
