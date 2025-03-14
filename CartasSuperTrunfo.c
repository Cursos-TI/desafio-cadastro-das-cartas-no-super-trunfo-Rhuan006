#include <stdio.h>
 int main(){
 
    char codigo1[14], codigo2[14], estado1[35], estado2[35], cidade1[60], cidade2[60];
    float area1, area2, pib1, pib2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
   
    printf("Digite uma letra de A a H para definir o primeiro estado. \n");
    printf("Esatdo: \n");
    scanf(" %c, &estado1 \n");
  
    printf("Escolha entre 01 e 04 para definir o número da carta \n");
    printf("Número: \n");
    scanf(" %2s, codigo1 \n");

    printf("Digite o nome da primeira cidade. \n");
    printf("Nome da cidade: \n");
    scanf(" %s, cidade1 \n");

    printf("Dgite o numero de habitantes. \n");
    printf("População: \n");
    scanf(" %f, populacao1\n");

    printf("Digite a extensão territorial da cidade. \n");
    printf("Área em km²:\n");
    scanf(" %f, area1\n");


 
    return 0;
}
