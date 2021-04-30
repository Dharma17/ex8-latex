/* Bubble Sort  */

/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

/* Defines */
#define NUM_MAX 100 /* Numeros sorteaveis: Entre 0 e NUM_MAX */
#define TAM_INT 100 /* Quantidade de numeros sorteados       */

int main(void)
{
    int numero[TAM_INT]; /* Vetor que armazena os numeros */
    int loop_valor, loop_crescente; /* Variaveis dos Loop */
    int num_aux;  /* Numero auxiliar da ordenacao*/
    
    srand(time(NULL)+getpid()); /* Tornando a funcao rand() totalmente aleatoria */
    
    /* Loop de preenchimento dos vetores */
    for(loop_valor = 0;loop_valor < TAM_INT; loop_valor++)
    {
        numero[loop_valor] = rand()%NUM_MAX;
        printf("Numero[%d] = %d\n",loop_valor,numero[loop_valor]);
    }

    /* Loop responsavel pela organizacao dos numeros em ordem crescente */    
    for (loop_valor = 0; loop_valor < TAM_INT; loop_valor++)
    {
        for (loop_crescente = loop_valor + 1; loop_crescente < TAM_INT; loop_crescente++)
        {
            /* Mudando valor de ordem caso a condicao seja verdadeira */
            if (numero[loop_valor] > numero[loop_crescente])
            {
                num_aux =  numero[loop_valor];
                numero[loop_valor] = numero[loop_crescente];
                numero[loop_crescente] = num_aux;
            }
        }    
   }
   
   /* Apresentacao dos numeros em ordem crescente */
   printf("A ordem crescente eh: \n");

   for(loop_valor = 0;loop_valor < TAM_INT; loop_valor++)
   {
       printf("lugar %2d  = %d; \n",loop_valor+1,numero[loop_valor]);
   }

   return EXIT_SUCCESS;
}
