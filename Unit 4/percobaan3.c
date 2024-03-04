#include <stdio.h>

void intro(char name[], int age) {
  printf("Halo! Perkenalkan nama saya %s. Usia saya %d tahun.\n", name, age);
}

int main() {
  intro("Roma", 12);
  intro("Romi", 30);
  intro("Romo", 75);
  return 0;
}

/*
Output:
Halo! Perkenalkan nama saya Roma. Usia saya 12 tahun.
Halo! Perkenalkan nama saya Romi. Usia saya 30 tahun.
Halo! Perkenalkan nama saya Romo. Usia saya 75 tahun.

*/