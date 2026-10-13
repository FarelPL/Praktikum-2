#include <stdio.h>

int main() {
    double r, t,volume,luas,keliling,phi;
    
    scanf("%lf %lf", &r, &t);
    
    phi = 3.142857;
    

    volume = phi * r * r * t;
    luas = 2 * phi * r * (r + t);
    keliling = 2 * phi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    
    return 0;
}