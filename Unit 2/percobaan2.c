#include <stdio.h>

int main(){
    int angka;

    printf("masukan angka: \n");
    scanf("%d", &angka);

    (angka > 0) ? printf("Kamu baru saja memasukan bilangan positif.\n") : (angka < 0) ? printf("kamu baru saja memasukan bilangan negatif.\n") : printf("kamu baru saja memasukan nol.\n");
}


/*
output:
masukan angka: 
1
Kamu baru saja memasukan bilangan positif.

masukan angka: 
-1
kamu baru saja memasukan bilangan negatif.

masukan angka: 
0
kamu baru saja memasukan nol.


*/