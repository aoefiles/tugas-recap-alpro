#include <stdio.h>

char fullname[30];

int main(){
    printf("masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

/*
output:
masukan nama lengkap kamu: 
Firyal Aufa Fahrudin
Halo Firyal Aufa Fahrudin

penjelasan: 
program di atas menggunakan fungsi fgets() sehingga dapat menampilkan semua karakter
termasuk spasi, karena fungsi fgets() dapat membaca string lengkap hingga karakter baris baru 
atau mencapai batas maksimum.
*/