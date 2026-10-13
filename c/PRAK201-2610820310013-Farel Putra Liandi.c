#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas_paralel[10], ttl[50], alamat[100], hobby[50], no_hp[20];

    printf("Nama                    :");
    scanf(" %[^\n]", nama);
    printf("NIM                     :");
    scanf(" %[^\n]", nim); 
    printf("Kelas Paralel           :");
    scanf(" %[^\n]", kelas_paralel); 
    printf("Tempat/Tanggal Lahir    :");
    scanf(" %[^\n]", ttl); 
    printf("Alamat                  :");
    scanf(" %[^\n]", alamat); 
    printf("Hobby                   :");
    scanf(" %[^\n]", hobby); 
    printf("No. HP                  :");
    scanf(" %[^\n]", no_hp); 

    return 0;
}