#include <stdio.h>
 
int main() {
    int numeroNormal = 2147483648; // Este valor excede o limite de um int normal
    long long int numeroGrande = 2147483648;
 
    printf("Número regular(int): %d\n", numeroNormal);
    printf("Número grande(long int): %ld\n", numeroGrande);
 
    numeroGrande = 2147483648;
    printf("Núdmero grande atualizado(long int): %lld\n", numeroGrande);


    return 0;
}





