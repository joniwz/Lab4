#include <stdio.h>
#include <stdlib.h>
/* Questao 6
int main()
{
    int x,a,b;

    do{
        do{
            printf("escolha uma opcao\n");
            printf("1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Modulo\n6.SAIR\n");
            scanf("%d",&x);
        } while(x < 1 || x > 6);

        if (x != 6){
            printf("digite dois valores\n");
            scanf("%d%d",&a,&b);
        }

        switch(x)
        {
            case 1:
                printf("Adicao eh %d\n",a + b);
                break;
            case 2:
                printf("Subtracao eh %d\n",a - b);
                break;
            case 3:
                printf("Multiplicacao eh %d\n",a * b);
                break;
            case 4:
                if(b == 0)
                    printf("erro");
                else
                    printf("Divisao eh %.4f\n",(float)a / b);
                break;
            case 5:
                if(b == 0)
                    printf("erro");
                else
                    printf("Modulo eh %d\n",a % b);
                break;
        }
    } while (x != 6);

    return 0;
}
*/

/* Questao 5
int main()
{
    int x,i,j;

    printf("escreva um valor\n");
    scanf("%d",&x);

    for(i = 1;i <= x;i++){
    for(j = 1;j <= i;j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
*/

/* Questao 4
int main()
{
    float temp,f,c;
    char x;

    printf("escreva a unidade, sendo c para Celsius e f para Fahrenheit\n");
    scanf("%c",&x);
    printf("escreva a temperatura\n");
    scanf("%f",&temp);

    if ((x == 'c') || (x == 'C')){
        f = temp * (9.0 / 5.0) + 32.0;
        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n",temp,f);
    }
    else if ((x == 'f') || (x == 'F')){
        c = (temp - 32.0) / (9.0 / 5.0);
        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius\n",temp,c);
    } else{
        printf("erro\n");
    }
    return 0;
}
*/


/* Questao 3
int main()
{
    float sal;

    printf("escreva o salario do funcionario\n");
    scanf("%f",&sal);

    printf("apos 25%% de aumento, o novo salario e R$%f\n",sal * 1.25);

    return 0;
}
*/
