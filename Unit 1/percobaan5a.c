#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

/*
output:
Masukan nama lengkap kamu: 
Firyal Aufa Fahrudin
Halo Firyal

Penjelasan: 
program di atas menggunakan fungsi scanf() sehingga hanya dapat menampilkan satu kata.
karena fungsi scanf() akan membaca string hingga bertemu dengan spasi atau karakter baris baru. 
Oleh karena itu, jika ada spasi dalam string, hanya bagian sebelum spasi yang akan dibaca.

*/