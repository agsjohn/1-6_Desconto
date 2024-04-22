#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    float bruto = 0, total, cal, num;
    for(x = 1; x <= 3; x++){
        printf("Digite o %iº valor: ", x);
        scanf("%f", &num);
        bruto = bruto + num;
    }
    getchar();
    if(bruto > 1000.00){
        cal = bruto * 0.1;
        total = bruto - cal;
    }
    else{
        cal = bruto * 0.08;
        total = bruto - cal;
    }
    printf("\nSoma dos três valores: R$%.2f \nDesconto concedido: R$%.2f \nValor líquido: R$%.2f", bruto, cal, total);
    getchar();
}
