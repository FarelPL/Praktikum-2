#include <stdio.h>
#include <math.h>

int main() {
    float a, b, alas, keliling, luas;
    
    scanf("%f %f", &a, &b);
    
    alas = sqrt((b * b) - (a * a));
    keliling = alas + a + b;
    luas = 0.5 * alas * a;
    
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
    
    return 0;
}