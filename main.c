/******************************************************************************

Crie um programa que recebe o preço de um produto pelo teclado e imprime na tela a mensagem adequada, de acordo com o preço: 
“Preço inválido”, se o preço for negativo ou zero
“Preço baixo”, se o preço for entre 0 e 30 (inclusive) 
“Preço médio”, se o preço for entre 30 e 50 (inclusive)
“Preço alto”, se o preço for maior do que 50


*******************************************************************************/
#include <stdio.h>

int main()
{
    int preco;
    
    printf("Digite o preço do seu produto: ");
    scanf("%d", &preco);
    
    if(preco <= 0){
        printf("Preço inválido");
    }else if(preco >= 1 && preco <= 30){
        printf("Preço baixo");
    }else if(preco >= 31 && preco <=50){
        printf("Preço médio");
    }else if(preco >= 51){
        printf("Preço alto");
    }
    
    return 0;
}
