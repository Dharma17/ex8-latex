/* Insertion Sort */

/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

/* Defines */
#define TAM 100 /* Quantidade de numeros sorteados */

void fInsertion_Sort(int *pVetor);


int main()
{
    int vVetor[TAM];
    int vAux;

    printf("***LISTA DESORDENADA: \n");

    srand(time(NULL));
    for(vAux=0; vAux<TAM; vAux++)
    {
        vVetor[AUX] = (rand() % 90) +10; /*Preenche o vetor com valores aleatorios de 10 ate 99;*/
        printf("%d \n", vVetor[AUX]);
    }

    fInsertion_Sort(vVetor); /*Chama a funcao de ordenacao*/

    printf("\n\n*** LISTA ORDENADA: \n");
    for(vAux=0; vAux<TAM; vAux++)
    {
        printf("%d \n", vVetor[AUX]);
    }

    printf("\n\n");
    system("pause");
}

void fInsertion_Sort(int *pVetor)
{
    int vAux;
    int vTemp;
    int vTroca;

    for(vAux=1; vAux<TAM; vAux++)
    {
        vTemp = vAux;
        while(pVetor[vTemp] < pVetor[vTemp-1])
        {
            vTroca = pVetor[vTemp];
            pVetor[vTemp] = pVetor[vTemp-1];
            pVetor[vTemp-1] = vTroca;
            vTemp--;

            if(vTemp == 0)
                    break;
        }
    }
}
