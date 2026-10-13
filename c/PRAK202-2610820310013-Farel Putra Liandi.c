#include <stdio.h>

int main() {
    float nilai1, nilai2, nilai3;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);


    nilai3 = nilai1 + nilai2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilai1, nilai2, nilai3);

    return 0;
}