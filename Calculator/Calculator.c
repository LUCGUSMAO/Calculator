#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); 
   int menu, num1, num2;
   float resultado1, resultado2;
  
  do{
  	  printf("__________________");	
      printf("\n|___CALCULADORA___|\n\n");          //Menu de op��es
      printf("1 Adi��o (+)\n");
      printf("2 Subtra��o (-)\n");
      printf("3 Divis�o (/)\n");
      printf("4 Multiplica��o (*)\n");
      printf("5 Raiz Quadrada\n");
      printf("0 Sair\n\n");
      scanf("%d", &menu);
      
      switch(menu){
        case 0:                                 //Sair do programa
            printf("Finalizando...");
            return 0;
        case 1:                                 //opera��o de adi��o
            printf("primeiro digito: ");            
            scanf("%d", &num1);
            printf("segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d ***\n\n\n", num1 + num2);
            
            break;
        case 2:                                 // opera��o de subtra��o
            printf("Primeiro digito: ");
            scanf("%d", &num1);
            printf("Segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d ***\n\n\n", num1 - num2);
            
            break;
        case 3:                                 //Divis�o
            printf("primeiro digito: ");
            scanf("%f", &resultado1);
            printf("Segundo digito: ");
            scanf("%f", &resultado2);
            printf("\n*** Resultado: %.2f ***\n\n\n", resultado1/resultado2);
            
            break;
        case 4:                                 //Multiplica��o
            printf("primeiro digito: ");
            scanf("%d", &num1);
            printf("Segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d***\n\n\n", num1*num2);
            
            break;
        case 5:                                 //Raiz Quadrada
            printf("Raiz Quadrada do numero: ");
            scanf("%f", &resultado1);
            printf("\n***Resultado: %.1f ***\n\n\n", sqrt(resultado1));
            
            break;
        default:                                //digita��o inv�lida
            printf("Op��o inv�lida");
            break;
      }
    } while (menu);
    
    return 0;
}




