#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}


/*
Output:
Bilangan utama: 2
 Bilangan pengali: 1
  Hasil perkalian: 2

 Bilangan pengali: 2
  Hasil perkalian: 4

Bilangan utama: 3
 Bilangan pengali: 1
  Hasil perkalian: 3

 Bilangan pengali: 2
  Hasil perkalian: 6

*/
