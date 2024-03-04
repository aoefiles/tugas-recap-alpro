#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

/*
output:
3.141593
3.1
3.14
3.142
3.1416
3.14159

penjelasan:
format %f adalah specifier untuk bilangan desimal

default %f akan mencetak 6 digit angka dibelakang koma.
angka di belakang titik digunakan untuk menentukan berapa digit angka
yg ingin ditampilkan. misalnya:

%.1f akan menampilkan 1 digit dibelakang koma
%.2f akan menampilkan 2 digit dibelakang koma, dst


*/