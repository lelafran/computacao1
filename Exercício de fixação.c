#include <stdio.h>
int main(){

    float peso, alt, taxa;
    int idade, codigo;


    printf("Digite o codigo:\n");
    scanf("%d" , &codigo);

    printf("Digite a idade, peso, altura:\n");
    scanf("%d %f %f", &idade, &peso,&alt);

    printf("Digite a Taxa\n:");
    scanf("%f" , &taxa);

    printf("Codigo: %d \n");
    printf("Idade: %d \nPeso:%f \nAltura:%f\n" , idade, peso, alt);
    printf("Taxa: %f", taxa);
    return 0;
      }
